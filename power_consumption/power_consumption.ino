#include <Adafruit_INA260.h>

Adafruit_INA260 ina260 = Adafruit_INA260();

int incomingByte = 0;
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
  if(Serial.available()>0){
    incomingByte = Serial.read();
    Serial.print("khadas:");
    Serial.println(incomingByte, DEC);
  }
  
  //Serial.println(ina260.readPower());

  delay(10);
}