from gpiozero import DigitalInputDevice, DigitalOutputDevice
from time import sleep

led_pin = DigitalOutputDevice(7)
button_pin = DigitalInputDevice(23, pull_up=True)

while True:
    print(button_pin.value)
    
    if button_pin.value == 1:
        led_pin.on()
    else:
        led_pin.off()

    sleep(0.1)