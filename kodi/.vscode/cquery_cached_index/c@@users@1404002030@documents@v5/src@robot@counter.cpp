#include "Counter.h"

Counter::Counter()
{

}

void Counter::Start(int time)
{
  running = true;
  timeRemaining = time;
  lastTime = std::time(0);
}

void Counter::Update()
{
  if (!running) return;
  timeRemaining -= (std::time(0) - lastTime) * 1000;
  if (timeRemaining <= 0)
  {
    timeRemaining = 0;
    running = false;
  }
}

int Counter::TimeRemaining()
{
  return timeRemaining;
}

bool Counter::Done()
{
  return (timeRemaining <= 0);
}
