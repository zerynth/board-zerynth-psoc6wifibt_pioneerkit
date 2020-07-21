from wireless import wifi
from murata.lbee5kl1dx import lbee5kl1dx as wifi_driver


def init():
    wifi_driver.init("US")
    return wifi_driver

def interface():
    return wifi


