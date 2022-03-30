#ifndef LIB_ONE_H
#define LIB_ONE_H

class One {
public:
  One();
  ~One();

  void setText(const char* value);

  const char * uppercase();
  const char * lowercase();
  const char * inverted();
};

#endif  // LIB_ONE_H
