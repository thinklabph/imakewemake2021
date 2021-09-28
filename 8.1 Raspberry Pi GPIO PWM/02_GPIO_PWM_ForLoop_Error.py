from gpiozero import PWMOutputDevice
from time import sleep

led_pin = PWMOutputDevice(7)

for i in range(0, 100, 0.1):
    led_pin.value = i
    sleep(0.01)