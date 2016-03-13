/*
 * MulTiTasking Blink
 
 *    Blink without delay in case you want it to Have a different On Time
 *    And a different OffTime
 
 *    By Barnabas Nomo <http://www.github.com/kowus>
 *    This sample code is in the public domain
 
 *    powered by <http://www.elite-education.org>
*/


  
  int ledPin = 13;
  long OnTime = 1000;
  long OffTime = 500;
// Declare Variables

  
  
  int ledState = LOW;
// Variable to store whether the LED is On or Off
  
  unsigned long previousMillis = 0;
//


 
    
  



void setup() {
  pinMode(ledPin, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  unsigned long currentMillis = millis(); //Create system "Clock" to check time

    if((ledState == HIGH) && (currentMillis - previousMillis >= OnTime)) 
    //If the LED is On and the time assigned to the process is greater than or equal to the time required for it to stay On ...
    {
      ledState = LOW;                         // Change the state of the LED
      previousMillis = currentMillis;         // We need to keep a constant pace(interval)
      digitalWrite(ledPin, ledState);         // Turn it Off
    }

    else if((ledState == LOW) && (currentMillis - previousMillis >= OffTime))
    //If the LED is Off and the time assigned to the process is greater than or equal to the time required for it to stay Off,
    {
      ledState = HIGH;                        // Change the state of the LED
      previousMillis = currentMillis;         // Constant pace remember?
      digitalWrite(ledPin, ledState);         // Turn it On
    }

}
