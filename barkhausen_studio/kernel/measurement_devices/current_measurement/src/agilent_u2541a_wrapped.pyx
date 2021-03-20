import usbtmc

class Usbtmc_agilent:
    instrument = usbtmc.Instrument

    def __init__(self, resource):
        self.instrument = usbtmc.Instrument(resource)

    def ask_identity(self):
        return self.instrument.ask('*IDN?')

    def reset(self):
        self.instrument.write_raw("*CLS;*RST")

    def send_msg(self, message):
        self.instrument.write_raw(message)

    def ask(self, message):
        return self.instrument.ask_raw(message)

    def read_raw(self):
        return self.instrument.read_raw()

    def wait_for_data(self):
        while True:
            if self.instrument.ask("WAV:STAT?\n") == "DATA":
                break

    def get_one_sample(self):
        self.send_msg("DIG\n")
        self.wait_for_data()
        return self.ask("WAV:DATA?\n")

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