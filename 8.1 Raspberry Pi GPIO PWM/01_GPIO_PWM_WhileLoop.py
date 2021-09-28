from gpiozero import PWMOutputDevice
from time import sleep

led_pin = PWMOutputDevice(7)

while True:
    for i in range(0, 100):
        led_pin.value = i/100
        print(led_pin.value)
        sleep(0.02)             # 2 seconds to 100 % Duty Cycle
                
    for i in range(100, 0, -1):
        led_pin.value = i/100
        print(led_pin.value)
        sleep(0.02)             # 2 Seconds to 0% Duty Cycle
        

