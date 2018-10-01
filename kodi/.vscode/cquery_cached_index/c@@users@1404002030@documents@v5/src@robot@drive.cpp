#include "Drive.h"

Drive::Drive()
{
  leftMotor = new Motor(1);
  rightMotor = new Motor(2);
  task = FORWARD;
  counter = new Counter();
}

void Drive::Update()
{
  counter->Update();

  switch (task) {
    case STOP: break;
    case FORWARD:
    {
      if (counter->Done()) task = STOP;
      leftMotor->move_velocity(leftMotorSpeed);
      rightMotor->move_velocity(rightMotorSpeed);
      break;
    }
  }
}

void Drive::Forward(int time, int speed)
{
  counter->Start(time);
  leftMotorSpeed = speed;
  rightMotorSpeed = speed;
  task = FORWARD;
}
