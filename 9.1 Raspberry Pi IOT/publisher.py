from Adafruit_IO import MQTTClient
import time
import random

ADAFRUIT_IO_USERNAME = 'iot_thinklab'
ADAFRUIT_IO_KEY = 'aio_WwrZ23hnGxxOx7bhUYJWujfarmDx'

AIO_FEED_KEY = 'imakewemake'

aio_client = MQTTClient(ADAFRUIT_IO_USERNAME, ADAFRUIT_IO_KEY)

aio_client.connect()

while True:
    value = random.randint(0, 100)
    
    print('Publishing', value)
    
    aio_client.publish(AIO_FEED_KEY, value)
    
    time.sleep(3)
    