from gpiozero import LED
from time import sleep

led_pin = 17

led = LED(led_pin)

while True:
    led.on()
    sleep(1)
    led.off()
    sleep(1)