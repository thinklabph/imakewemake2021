from gpiozero import PWMOutputDevice
from time import sleep

led_pin = PWMOutputDevice(7)

while True:
    led_pin.value = 0       # 0% Duty Cycle (Full Off)
    sleep(1)
    led_pin.value = 0.25    # 25% Duty Cycle
    sleep(1)
    led_pin.value = 0.5     # 50% Duty Cycle
    sleep(1)
    led_pin.value = 0.75    # 75% Duty Cycle
    sleep(1)
    led_pin.value = 1       # 100 % Duty Cycle (Full On)
    sleep(1)