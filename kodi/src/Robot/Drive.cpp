#include "drive.h"

Drive::Drive()
{
  leftMotor = new Motor(1);
  rightMotor = new Motor(2);
  drivingForward = false;
}

void Drive::update()
{
  // Bara til að prófa
  if (drivingForward)
  {
    if (time <= 0) drivingForward = false;
    leftMotor->move_velocity(speed);
    rightMotor->move_velocity(speed);
  }
}

void Drive::forward(int time, int speed)
{
  drivingForward = true;
  this->time = time;
  this->speed = speed;
}
