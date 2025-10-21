sudo chmod a+rw /dev/ttyACM0
cat < /dev/ttyACM0 | awk 'BEGIN { FS = "," } {OFMT = "%2.5f"}\
/GPGGA/ { print "ID: ", $1, "Time: ", $2, "Lat: ", $3, "Lon: ", $5, "Höhe: ", $10}' > data