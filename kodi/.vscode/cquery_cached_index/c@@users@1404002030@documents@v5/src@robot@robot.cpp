#include "Robot.h"

Robot::Robot()
{
  drive = new Drive();
}

void Robot::update()
{
  drive->update();
}
