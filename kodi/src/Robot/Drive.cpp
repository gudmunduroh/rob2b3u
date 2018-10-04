#include "Drive.h"

Drive::Drive()
{
  leftFrontMotor = new Motor(1);
  leftBackMotor = new Motor(2);
  rightFrontMotor = new Motor(3);
  rightBackMotor = new Motor(4);
  task = FORWARD;
  counter = new Counter();
}

void Drive::Update()
{
  counter->Update();

  switch (task) {
    case STOP:
    {
      if (!leftFrontMotor->is_stopped()) leftFrontMotor->move_velocity(0);
      if (!leftBackMotor->is_stopped()) leftBackMotor->move_velocity(0);
      if (!rightFrontMotor->is_stopped()) rightFrontMotor->move_velocity(0);
      if (!rightBackMotor->is_stopped()) rightBackMotor->move_velocity(0);
    }
    case FORWARD:
    {
      if (counter->Done()) task = STOP;
      leftFrontMotor->move_velocity(leftMotorSpeed);
      leftBackMotor->move_velocity(leftMotorSpeed);
      rightFrontMotor->move_velocity(rightMotorSpeed);
      rightBackMotor->move_velocity(rightMotorSpeed);
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
