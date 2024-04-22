#include <SoftwareSerial.h>

SoftwareSerial SIM900A(2, 3);

void setup() 
{
  SIM900A.begin(9600); 
  Serial.begin(9600);  
  Serial.println("SIM900A Ready");
  delay(100);
  Serial.println("Type c to make a call or a to answer a call");
}

void loop() {
  if (Serial.available() > 0) 
  {
    switch (Serial.read()) 
    {
      case 'c':
        makeCall("+91xxxxxxxx");
        break;
      case 'a':
        answerCall();
        break;
    }
  }

  if (SIM900A.available() > 0) 
  {
    Serial.write(SIM900A.read());
  }
}

void makeCall(String phoneNumber) 
{
  Serial.println("Making a call");
  SIM900A.println("ATD" + phoneNumber + ";");
  delay(1000);
}

void answerCall() 
{
  Serial.println("Answering call");
  SIM900A.println("ATA");
  delay(1000);
}
