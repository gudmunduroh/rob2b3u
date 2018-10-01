#include "main.h"
#include "Counter.h"

using namespace pros;

enum DrivingTask {
  STOP,
  FORWARD
};

class Drive {
private:
  Motor *leftMotor;
  Motor *rightMotor;
  DrivingTask task;
  int rightMotorSpeed;
  int leftMotorSpeed;
  Counter *counter;
public:
  Drive();
  void Update();
  void Forward(int time, int speed = 200);
};
