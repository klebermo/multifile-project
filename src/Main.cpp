#include <libone.h>
#include <libtwo.h>

int main(int argc, char *argv[]) {
  One one;
  one.setText("Kleber Mota de Oliveira");
  cout << "text:" << one.uppercase() << endl;
  cout << "text:" << one.lowercase() << endl;
  return 1;
}
