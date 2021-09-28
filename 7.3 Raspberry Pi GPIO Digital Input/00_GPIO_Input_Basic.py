from gpiozero import DigitalInputDevice
from time import sleep

button_pin = DigitalInputDevice(14, pull_up=False)

while True:
    print(button_pin.value)
    sleep(0.1)