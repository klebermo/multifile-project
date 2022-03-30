#include "libone.h"

One::One() {
  text = new char[1];
  text[0] = '\0';
}

One::~One() {
  delete [] text;
}

void One::setText(const char * value) {
  delete [] text;

  int size = 0;
  for(; value[size] != '\0'; size++);

  text = new char[size];
  for(int i=0; i<size; i++)
    text[i] = value[i];
}

const char * One::uppercase() {
  char * result;

  int size = 0;
  for(; text[size] != '\0'; size++);

  result = new char[size];
  for(int i=0; i<size; i++) {
    unsigned char c = text[i];
    if (c >= 'a' && c <= 'z')
      result[i] = c - 32;
    else
      result[i] = c;
  }

  return result;
}

const char * One::lowercase() {
  char * result;

  int size = 0;
  for(; text[size] != '\0'; size++);

  result = new char[size];
  for(int i=0; i<size; i++) {
    unsigned char c = text[i];
    if (c >= 'A' && c <= 'Z')
      result[i] = c + 32;
    else
      result[i] = c;
  }

  return result;
}

const char * One::inverted() {
  char * result;

  int size = 0;
  for(; text[size] != '\0'; size++)

  result = new char[size];
  for(int i=0; i<size; i++) {
    result[i] = text[size-(i+1)];
  }
  result[size] = '\0';

  return result;
}
