#include "lib.h"

int id(int) { return 0; }
int main() {
  return myfun(true, &id) != 0;
}
