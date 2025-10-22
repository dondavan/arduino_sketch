#include <Adafruit_INA260.h>

Adafruit_INA260 ina260 = Adafruit_INA260();

char x = "x";
void setup() {
  Serial.begin(9600);
  // Wait until serial port is opened
  while (!Serial) { delay(10); }

  if (!ina260.begin()) {
    while (1)
      ;
  }
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

  */
  if (Serial.available()) {
    x = Serial.peek();  // Look at the next character
    Serial.print("Next character will be: ");
    Serial.println(x);

    x = Serial.read();  // Now actually consume it
    Serial.print("Read character: ");
    Serial.println(x);
  }
  
  //Serial.println(ina260.readPower());

  delay(10);
}