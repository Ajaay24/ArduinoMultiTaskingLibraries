
Here Are The Keywords for using this Library



NOTE: 	I would strongly recommend that you open the
	Analog_Multitasking_Explained sketch if you 
	are new to multitasking analog devices. For 
	NomoBlink, Refer to the blink without delay 
	sketch in the arduino examples menu... Although
	You'll better understand it if you check the 
	MultiBlink_NoDelay_CODE Example I Attached... 
	Adafruit will be extremely helpful TOO!!!!!!


######For Blink########

keyword 1:
NomoBlink object(int pin, long on, long off);

eg.

NomoBlink led1(11, 1000, 500);

That is to say the Led is connected to pin 11, you want it to stay ON for 1000microseconds(1 second), and OFF for 500microseconds(1/2 a second)

**NomoBlink is the name of the class that works with blinking LEDs

keyword 2:
object.Update();

eg.

led1.Update();

Causes the code to run. ******Should be put in the void loop;

===========================================================================
===========================================================================
===========================================================================

#####For Servo#####

keyword 1:
NomoSweep object(interval, increment);

eg.

NomoSweep servo1(15, 1);

Position of the servo head increases by 1 degree every 15microseconds;


keyword 2:
object.Attach(any pin);

eg.

servo1.Attach(9);

in the void setup you indicate the pin your servo is connected to.
always use Serial.begin(preferred baud rate) in the void setup;

keyword 4:
object.Update();

eg.

servo1.Update();

Causes the code to run. ******Should be put in the void loop;


===========================================================================
===========================================================================
===========================================================================


######For MultiFade########

keyword 1:
MultiFade object(int pin, int increase, long interval);

eg.

NomoBlink led1(11, 10, 50);

That is to say the Led is connected to pin 11, you want it to fade by 10 units every 50microseconds.

**MultiFade is the name of the class that works with the Fading LEDs

keyword 2:
object.Update();

eg.

led1.Update();

Causes the code to run. ******Should be put in the void loop;





Sincerely,
Barnabas Nomo