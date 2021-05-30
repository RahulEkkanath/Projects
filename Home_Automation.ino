#include <SoftwareSerial.h>
SoftwareSerial newSerial(2, 3);
int Data; 
int a=0; 
int x=7;    //ON relay 1
int y=8;    //ON relay 2
void setup() {
  // Setup code to initialize all the user and predefined functions
  Serial.begin(115200); 
  newSerial.begin(115200); 
  pinMode(13, OUTPUT);
  pinMode(x, OUTPUT);
  pinMode(y, OUTPUT);
  digitalWrite(13,HIGH);
  delay(3000);
  delay(3000);
  digitalWrite(13,LOW);
}

void loop() {
     if (newSerial.available())  
       {
        Data=newSerial.read(); 
        Serial.write(Data);
       if(Data=='1')
           {    
           a=1;                       
           digitalWrite(x,HIGH); 
           Serial.println("ON");
           digitalWrite(13, HIGH);
           delay(1000);
           digitalWrite(13,LOW);
           delay(1000);
           digitalWrite(13, HIGH);
           delay(1000);
           digitalWrite(13,LOW);
           }
      if (Data=='2')
          {
          a=0;
          digitalWrite(x,LOW);
          Serial.println("OFF");
          digitalWrite(13, HIGH);
           delay(1000);
           digitalWrite(13,LOW);
           delay(1000);
           digitalWrite(13, HIGH);
           delay(1000);
           digitalWrite(13,LOW);
          }
      }
delay(300);
}
