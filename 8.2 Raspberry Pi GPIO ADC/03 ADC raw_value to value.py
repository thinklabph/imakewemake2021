from gpiozero import MCP3008
from time import sleep

pot = MCP3008(channel=0, 
              clock_pin=11, 
              mosi_pin=10, 
              miso_pin=9, 
              select_pin=8)

while True:
    value = pot.raw_value / 1023
    print(value)
    sleep(0.1)