import usbtmc

class Usbtmc_finder:
    found_devices = str()

    def __init__(self):
        self.found_devices = "empty"

    def find_devices(self):
        found_devices = usbtmc.list_devices()

        if len(found_devices) == 0:
            self.found_devices = "empty"
        else:
            self.found_devices = ' '.join([str(elem) for elem in found_devices])

    def get_found(self):
        return self.found_devices


cdef public void find_devices(object obj):
    obj.find_devices()

cdef public char* available_devices(object obj):
    return obj.get_found()

cdef public object create_finder_py_class():
    return Usbtmc_finder()