sudo chmod a+rw /dev/ttyACM0
avrdude -C./config/avrdude.conf -v -V -patmega328p -carduino "-P/dev/ttyACM0" -b115200 -D "-Uflash:w:./build/power_consumption.ino.hex:i"
