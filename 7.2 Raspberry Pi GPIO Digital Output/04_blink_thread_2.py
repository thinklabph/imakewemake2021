from gpiozero import DigitalOutputDevice
from signal import pause

print("blink.py start")

led_pin = DigitalOutputDevice(7)

led_pin.blink(on_time=1, off_time=1)

while True:
    print("Hello World")
    

pause()
