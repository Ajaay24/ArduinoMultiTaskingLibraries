/*
 * MulTiTasking Sweep And Fade
 *    This explains what goes on inside the class I created for NomoSweep and MultiFade
 
 *    By Barnabas Nomo <http://www.github.com/kowus>
 *    This sample code is in the public domain
 
 *    powered by <http://www.elite-education.org>
*/


#include <Servo.h>
Servo firstServo;
//Servo secondServo;


unsigned long previousMillis = 0;
unsigned long previousMillis1 = 0;

const long interval = 15;
const long ledInterval = 15;

const int ledPin = 11;

int pos = 0;
int fadeValue = 0;

int increment = 1;
int fadeIncrement = 5;


void setup() {
  Serial.begin(9600);
  firstServo.attach(9);
  //secondServo.attach(10);
  pinMode(ledPin, OUTPUT);
  Serial.println("Kowus Commence");
  delay(1000);
}

void loop() {
  unsigned long currentMillis = millis();



// DITCH THE FOR LOOP





  if((currentMillis - previousMillis) >= interval)
  {
    
// Need To Know Classified
    
    previousMillis = currentMillis;       // Pace control
    pos += increment;                     // Increase by Value For increment
    firstServo.write(pos);                // Write value of pos to servo
    //Serial.print(pos);                  
    //Serial.print("             ");      
    if((pos >= 180) || (pos <= 0))        // declare limits
    {
      // If it reaches maximum limit, negate the increase, else remain positive
      increment = -increment;
    }
  }


// DITCH THE FOR LOOP


  if((currentMillis - previousMillis1) >= ledInterval)
  {
    previousMillis1 = currentMillis;    // Pace control
    fadeValue += fadeIncrement;         // Increase by Value For fadeIncrement
    analogWrite(ledPin, fadeValue);     //Write fadeValue to LED
    if((fadeValue >= 255) || (fadeValue <= 0))
    {
      // If it reaches maximum limit, negate the increase, else remain positive
      
     fadeIncrement = -fadeIncrement; 
    }
  }
}
