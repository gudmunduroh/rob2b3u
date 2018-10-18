#include "main.h"

enum class PatternTask {
  STRAIGHT,
  TURN,
  STOP,
};

class PatternValue {
public:
  PatternTask type;
  int speed;
  int turnRadius;
  PatternValue(PatternTask type, int speed = 100, int turnRadius = 0);
};
