#include <SoftwareSerial.h>
SoftwareSerial gsmSerial(10, 11); // RX, TX pins of GSM module

void setup() {
  Serial.begin(9600);
  gsmSerial.begin(9600); // initialize GSM module
}

void loop() {
  // check for accident condition here
  // if accident occurred, send SOS message
  sendSOS();
}

void sendSOS() {
  gsmSerial.println("AT+CMGF=1"); // set SMS mode to text
  delay(1000);
  gsmSerial.println("AT+CMGS=\"+1234567890\""); // replace with your phone number
  delay(1000);
  gsmSerial.println("SOS! Help me! I've had an accident!"); // replace with your SOS message
  delay(1000);
  gsmSerial.write(0x1A); // send message termination character
  delay(1000);
}