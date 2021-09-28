from gpiozero import DigitalOutputDevice
from signal import pause

pin_led_yellow = DigitalOutputDevice(25)

pin_led_yellow.blink(on_time=1, off_time=1)

pause()

