/*
 * Blink without delay-- for those who don't want to 
 * write long lines of code that do the same thing over
 * and over again.
 * 
 
 *    By Barnabas Nomo <http://www.github.com/kowus>
 *    This sample code is in the public domain
 *    
 *    powered by <http://www.elite-education.org>
*/
#include <NomoBlink.h>


NomoBlink led0(11, 1000, 500);
NomoBlink led1(12, 100, 200);
NomoBlink led2(11, 500, 300);
NomoBlink led3(13, 750, 4500;
NomoBlink led4(10, 100, 50);
// Reference my custom class NomoBlink object(pin, HIGH Time, LOW Time);

void setup() {
  // pinMode has already been declared in the library
  // so just  skip to the void loop

}

void loop() {
  led0.Update();
  led1.Update();
  led2.Update();
  led3.Update();
  led4.Update();
  // This class is also available in tutorials on Adafruit
  // To find out how the multitask code works, you can open the header file 
  // bound to this project

}
