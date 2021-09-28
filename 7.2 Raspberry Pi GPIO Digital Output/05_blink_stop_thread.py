from gpiozero import DigitalOutputDevice
from signal import pause
from time import sleep

print("blink.py start")

led_pin = DigitalOutputDevice(7)

led_pin.blink(on_time=1, off_time=1)

sleep(5)

led_pin.off()

pause()