#include "libone.h"

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  One one;
  one.setText(argv[1]);

  cout << one.uppercase() << endl;
  cout << one.lowercase() << endl;
  cout << one.inverted() << endl;

  return 1;
}
