#include "main.h"

using namespace pros;

class Drive {
private:
  Motor *leftMotor;
  Motor *rightMotor;
  bool drivingForward; // --
  int speed; // --
  int time; // --
public:
  Drive();
  void update();
  void forward(int time, int speed = 200);
};
