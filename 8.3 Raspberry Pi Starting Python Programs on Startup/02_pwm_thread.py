from gpiozero import PWMOutputDevice
from signal import pause

pin_green_led = PWMOutputDevice(23)

pin_green_led.pulse(fade_in_time=0.5, fade_out_time=0.5)

pause()
