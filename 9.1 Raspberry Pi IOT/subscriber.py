from Adafruit_IO import MQTTClient

ADAFRUIT_IO_USERNAME = 'iot_thinklab'
ADAFRUIT_IO_KEY = 'aio_WwrZ23hnGxxOx7bhUYJWujfarmDx'

AIO_FEED_KEY = 'imakewemake'

def aio_connected(client):
    client.subscribe(AIO_FEED_KEY)
    print('Subscribed to feed', AIO_FEED_KEY)

def aio_message(client, feed_key, data):
    print(feed_key, data)

aio_client = MQTTClient(ADAFRUIT_IO_USERNAME, ADAFRUIT_IO_KEY)

aio_client.on_connect    = aio_connected
aio_client.on_message    = aio_message

aio_client.connect()

aio_client.loop_blocking()