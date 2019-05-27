from base import *
from devices import *

class PSoC6WiFiBTPioneerKit(Board):

    @staticmethod
    def match(dev):
        return dev["vid"]=="04B4" and dev["pid"] == "F148"

    def reset(self):
        pass

    def burn(self,bin,outfn=None):
        pass

