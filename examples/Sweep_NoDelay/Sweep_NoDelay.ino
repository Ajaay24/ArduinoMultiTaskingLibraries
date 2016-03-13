/*
 * MulTiTasking Servos
 * 
 
 *    By Barnabas Nomo <http://www.github.com/kowus>
 *    This sample code is in the public domain
 *    
 *    powered by <http://www.elite-education.org>
*/


#include <NomoSweep.h>



NomoSweep servo0(15, 1);
NomoSweep servo1(20, 3);
NomoSweep servo2(50, 60); 

// Reference my custom Servo class NomoSweep object(interval, increment(change) );

void setup() {
  Serial.begin(9600);
  servo0.Attach(9);
  servo1.Attach(10);
  servo2.Attach(11);

  // Custom Attach constructor...

}

void loop() {
  servo0.Update();
  servo1.Update();
  servo2.Update();
  // Causes your servo to change position based on the parameters indicated in the instance declaration
}
