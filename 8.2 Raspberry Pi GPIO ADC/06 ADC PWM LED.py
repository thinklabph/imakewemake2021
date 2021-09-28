from gpiozero import MCP3008, PWMOutputDevice
from time import sleep
from signal import pause

pot = MCP3008(channel=0, 
              clock_pin=11, 
              mosi_pin=10, 
              miso_pin=9, 
              select_pin=8)

led_pin = PWMOutputDevice(7)

while True:
    pot_value = pot.raw_value / 1023
    led_pin.value = pot_value

    print(pot_value)
    
    sleep(0.1)