#include "libtwo.h"

Number::Number(int value) {
  this->data = &value;
}

Number::Number(float value) {
  this->data = &value;
}

Number::Number(double value) {
  this->data = &value;
}

Number::~Number() {
  //
}
