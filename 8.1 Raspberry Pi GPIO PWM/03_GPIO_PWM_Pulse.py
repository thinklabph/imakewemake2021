from gpiozero import PWMOutputDevice
from signal import pause

led_pin = PWMOutputDevice(7)

# led_pin.pulse()
led_pin.pulse(fade_in_time=2, fade_out_time=2)

pause()