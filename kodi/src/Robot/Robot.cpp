#include "Robot.h"

Robot::Robot()
{
  drive = new Drive();
}

void Robot::Update()
{
  drive->Update();
}
