from gpiozero import DigitalOutputDevice
from time import sleep

print("blink.py start")

led_pin = DigitalOutputDevice(7)

while True:
    led_pin.on()
    sleep(1)
    led_pin.off()
    sleep(1)
    