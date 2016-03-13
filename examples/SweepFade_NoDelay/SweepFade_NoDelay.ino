/*
 * MulTiTasking Servos And Fading LEDs.
 * 
 
 *    By Barnabas Nomo <http://www.github.com/kowus>
 *    This sample code is in the public domain
 *    
 *    powered by <http://www.elite-education.org>
*/


#include <MultiFade.h>
#include <NomoSweep.h>




MultiFade led(11, 5, 15);
// Reference my custom MultiFade class MultiFade object(pin, increment(change), interval);

NomoSweep servo1(15, 1);
// Reference my custom Servo class NomoSweep object(interval, increment(change) );

void setup() {
  Serial.begin(9600);
  servo1.Attach(9);
  // Custom Attach constructor...

}

void loop() {
  led.Update();
  //Causes your led to vary brightness based on the parameters indicated in the instance declaration
  
  servo1.Update();
  // Causes your servo to change position based on the parameters indicated in the instance declaration
  

}
