#include "main.h"
#include "Counter.h"
#include "Pattern.h"

using namespace pros;

enum class DrivingTask {
  STOP,
  MOVING
};

class Drive {
private:
  Motor *leftFrontMotor;
  Motor *leftBackMotor;
  Motor *rightFrontMotor;
  Motor *rightBackMotor;
  DrivingTask task;
  int rightMotorSpeed;
  int leftMotorSpeed;
  Counter *counter;
  void CalcMotorSpeed();
public:
  int turningRadius;
  int speed;
  Drive();
  void Update();
  void Forward(int time, int speed = 200);
};
