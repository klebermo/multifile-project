#ifndef LIB_ONE_H
#define LIB_ONE_H

#include <iostream>
using namespace std;

#include <string>
using namespace std;

class One {
public:
  One();
  ~One();

  void setText(string value);

  string uppercase();
  string lowercase();
  string inverted();
};

#endif  // LIB_ONE_H
