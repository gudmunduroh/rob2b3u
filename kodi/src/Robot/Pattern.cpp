#include "Pattern.h"

PatternValue::PatternValue(PatternTask type, int speed, int turnRadius)
{
  this->type = type;
  this->speed = speed;
  this->turnRadius = turnRadius;
}
