#include <ctime>
#include "main.h"

using namespace pros;

class Counter {
private:
  int timeRemaining;
  int lastTime;
  bool running;
public:
  Counter();
  int TimeRemaining();
  bool Done();
  void Start(int time);
  void Update();
};
