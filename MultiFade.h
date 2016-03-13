class MultiFade
{
	unsigned long previousMillis;
	long ledInterval;
	int ledPin;
	int increment;

	int fadeValue;
	

public:
	MultiFade(int pin, int increase, long interval)
	{
		ledPin = pin;

		pinMode(ledPin, OUTPUT);
		
		increment = increase;
		
		ledInterval = interval;
		
		previousMillis = 0;


		fadeValue = 0;
	}

	void Update()
	{
		unsigned long currentMillis = millis();
		if ((currentMillis - previousMillis) >= ledInterval)
		{
			previousMillis = currentMillis;
			analogWrite(ledPin, fadeValue);
			fadeValue += increment;

			if ((fadeValue >= 255) || (fadeValue <= 0))
			{
				increment = -increment;
			}
		}
	}
};