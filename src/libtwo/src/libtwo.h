#ifndef LIB_TWO_H
#define LIB_TWO_H

class Number {
private:
  void * data;
public:
  Number(int value);
  Number(float value);
  Number(double value);
  ~Number();
};

#endif  // LIB_TWO_H
