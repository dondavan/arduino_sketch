#include <Adafruit_INA260.h>

Adafruit_INA260 ina260 = Adafruit_INA260();
char buffer[256];
void setup() {
  Serial.begin(9600);
  // Wait until serial port is opened
  while (!Serial) { delay(10); }

  Serial.println("Adafruit INA260 Test");

  if (!ina260.begin()) {
    Serial.println("Couldn't find INA260 chip");
    while (1)
      ;
  }
  Serial.println("Found INA260 chip");
}

void loop() {
  /*
  Serial.print("Current: ");
  Serial.print(ina260.readCurrent());
  Serial.println(" mA");

  Serial.print("Bus Voltage: ");
  Serial.print(ina260.readBusVoltage());
  Serial.println(" mV");

  Serial.print("Power: ");
  Serial.println(" mW");

  Serial.print(ina260.readPower());
*/

  if (Serial.available() > 0) {

	// read the data
  Serial.readBytes(buffer, 256);
                
	// say what you got:
        Serial.print(buffer);

	}
  delay(10);
}