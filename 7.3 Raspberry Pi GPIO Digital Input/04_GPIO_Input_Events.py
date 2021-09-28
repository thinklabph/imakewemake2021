from gpiozero import DigitalInputDevice
from signal import pause

def button_pressed():
    print("pressed")

def button_released():
    print("released")

button_pin = DigitalInputDevice(23, pull_up=True)

button_pin.when_activated = button_pressed

button_pin.when_deactivated = button_released

pause()