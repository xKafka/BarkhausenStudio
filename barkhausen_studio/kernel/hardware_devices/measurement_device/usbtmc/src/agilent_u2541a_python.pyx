import usbtmc

def check_list_of_devices():

    return str("empty").encode('utf-8')

class Usbtmc_agilent:
    instrument = usbtmc.Instrument
    number_of_data = int()
    data_size_preset = int()

    def __init__(self, resource):
        self.resource = resource
        self.instrument = usbtmc.Instrument(self.resource)

    def ask_identity(self):
        return self.instrument.ask('*IDN?')

    def reset(self):
        self.instrument.write("*CLS;*RST")

    def send_msg(self, message):
        self.instrument.write(message)

    def set_number_of_data(self, num_of_data):
        self.data_size_preset = (int(num_of_data) * 2) + 10

    def ask(self, message):
        return self.instrument.ask_raw(message)

    def read_raw(self):
        response = self.instrument.read_raw()
        self.number_of_data = len(response)
        return response

    def wait_for_data(self):
        while True:

            reponse = self.instrument.ask("WAV:STAT?\n")

            if reponse == "OVER":
                self.send_msg("RUN\n")

            if reponse == "DATA":
                break

    def last_data_len(self):
        return self.number_of_data

    def get_one_sample(self):
        self.wait_for_data()

        response = self.ask("WAV:DATA?\n")
        self.number_of_data = len(response)

        if self.number_of_data != self.data_size_preset:
            print self.number_of_data
            self.send_msg("STOP\n")
            self.instrument.clear()
            self.send_msg("RUN\n")

            response = self.get_one_sample()

        return response

cdef public char* check_available_devices():
    return check_list_of_devices()

cdef public void set_data_size(object obj, const char *size):
    obj.set_number_of_data(size)

cdef public int last_data_size(object obj):
    return obj.last_data_len()

cdef public object create_usbtmc_agilent(const char *resource):
    return Usbtmc_agilent(resource)

cdef public char* check_identity(object obj):
    return obj.ask_identity()

cdef public void send_msg(object obj, const char *msg):
    obj.send_msg(msg)

cdef public char* ask(object obj, const char* what):
    return obj.ask(what)

cdef public void reset_device(object obj):
    obj.reset()

cdef public void wait_for_data(object obj):
    obj.wait_for_data()

cdef public char* read_raw(object obj):
    return obj.read_raw()

cdef public char* one_sample(object obj):
    return obj.get_one_sample()