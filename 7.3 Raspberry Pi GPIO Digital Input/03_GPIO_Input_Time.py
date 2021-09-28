from gpiozero import DigitalInputDevice
from time import sleep

button_pin = DigitalInputDevice(23, pull_up=True)

while True:
    print(button_pin.active_time, button_pin.inactive_time)
    sleep(0.1)