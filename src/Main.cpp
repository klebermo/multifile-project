#include <libone.h>
#include <libtwo.h>

#include <iostream>
using namespace std;

#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
  if(argc == 2) {
    hello(argv[1]);
  } else if(argc == 3) {
    hello(argv[1]);
    cout << Double(atoi(argv[2])) << "\n";
  } else {
    cout << "Usage: " << argv[0] << " [name] [number]" << endl;
  }
}
