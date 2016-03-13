#include <Servo.h>

class NomoSweep
{
  Servo servo;
  int pos;
  int increment;
  int updateInterval;
  unsigned long lastUpdate;

  public:
    NomoSweep(int interval, int increaseRate)
    {
      updateInterval = interval;
      increment = increaseRate;
    }


    void Attach(int pin)
    {
      servo.attach(pin);
    }

    void Detach()
    {
      servo.detach();
    }

    void Update()
    {
      if ((millis() - lastUpdate) > updateInterval)
      {
        lastUpdate = millis();
        servo.write(pos);
        Serial.println(pos);
        pos += increment;
        if((pos >= 180) || (pos <= 0))
        {
          increment = -increment;
        }
      }
    }
};