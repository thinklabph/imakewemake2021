from gpiozero import DigitalOutputDevice
from time import sleep

print("blink.py start")

led_pin = DigitalOutputDevice(7)

print(type(led_pin))

while True:
    led_pin.on()    # HIGH
    print(led_pin.value)    # Gets the state of the pin
    sleep(3)

    led_pin.off()   # LOW
    print(led_pin.value)
    sleep(1)
    