#include <SoftwareSerial.h>
SoftwareSerial gprs(2,3);/// GSM MODEM Tx 2 and Rx to 3
#define impact 4
#define led 13
int a=0,i=0;
//////////////////////////////////////////////////////////////////////////////


void SendSMS(String Data){     ////send a message///
 
  gprs.print("AT+CMGF=1\r");    //Because we want to send the SMS in text mode
  delay(2000);  
  gprs.print("AT+CMGS=\"+91XXXXXXXXX\"\r");    //Start sending msg to this number //
  //to be sent to the number specified.
  //Replace this number with the target mobile number.
  delay(200);
  gprs.print(Data);
  gprs.print("\r");   //The text for the message
  delay(100);
  gprs.write(0x1A);  //Equivalent to sending Ctrl+Z  
  call(); 
}
////////////////////////////////////////
void call(){
     gprs.println("ATDXXXXXXXXX;"); //replace x by your number
     delay(9000);
     gprs.println("ATH");
     delay(2000);
//     Serial.println("calling.....");
     Serial.println("SENDING SMS...");
  }

void setup() {
  gprs.begin(9600);
  pinMode(impact,INPUT_PULLUP);
  pinMode(led,OUTPUT);
  Serial.begin(9600); 
  gprs.begin (9600); 
}

void loop() {
  digitalWrite(led,LOW);
 if(digitalRead(impact)==LOW){    
      digitalWrite(led,HIGH);
      Serial.println("calling.....");
      //  Serial.println("I want Help !!!Location:" + String("Lat: ") +String(Lat) + " "+String("Lon: ") + String(Lon));
      String SMSData = "I am in Danger! Please track my location http://maps.google.com/maps?saddr=17.541149,78.385431";    
      SendSMS(SMSData);
        call(); 
}
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
