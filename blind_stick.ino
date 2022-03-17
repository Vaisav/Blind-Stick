int trigpin =3;
int echopin =4;
int piezoPin = 9;
long duration;
int distance;
const int buzzer = 9;

void setup()
{
  pinMode(buzzer, OUTPUT);
 pinMode(trigpin, OUTPUT);
 pinMode (echopin, INPUT);
 Serial.begin(9600);
}

void loop() 
{  
digitalWrite(trigpin,LOW); 
delayMicroseconds(2);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);
duration=pulseIn (echopin,HIGH);
distance=duration* 0.034/2;
Serial.println (distance);
 if (distance<50)
  {
  tone(buzzer, 100); // Send .1KHz sound signal...
  delay(100);        // ...for .1 sec
  noTone(buzzer);     // Stop sound...
  delay(100);        // ...for 1sec
  
  }

else if (distance<100)
  {
      tone(buzzer, 300); // Send .3KHz sound signal...
  delay(300);        // ...for .3 sec
  noTone(buzzer);     // Stop sound...
  delay(300);        // ...for 1sec
  }
 
else if (distance<150)
  {
     tone(buzzer, 500); // Send .5KHz sound signal...
  delay(500);        // ...for .5 sec
  noTone(buzzer);     // Stop sound...
  delay(500);        // ...for 1sec
  }
  
   else if (distance<200)
  {
   tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
  }
 
  

}
