#include "libone.h"

One::One() {
  text = new string();
}

One::~One() {
  delete text;
}

void One::setText(string value) {
  //
}

string One::uppercase() {
  string result(*this->text);

  for(int i=0; i<result.size(); i++) {
    char c = result[i];
    c = toupper(c);
    result[i] = c;
  }

  return result;
}

string One::lowercase() {
  string result(*this->text);

  for(int i=0; i<result.size(); i++) {
    char c = result[i];
    c = tolower(c);
    result[i] = c;
  }

  return result;
}

string One::inverted() {
  string result;

  string temp(*this->text);
  for(int i=temp.size(); i>0; i--) {
    result = result + temp.at(i);
  }

  return result;
}
