from gpiozero import MCP3008
from time import sleep
from signal import pause

pot = MCP3008(channel=0, 
              clock_pin=11, 
              mosi_pin=10, 
              miso_pin=9, 
              select_pin=8)

pause()

while True:
    value = pot.raw_value / 1023
    voltage = value * 3.3
    print(voltage)
    sleep(0.1)