#include "lib.h"

int ff(int x) {
  return 2 / x;
}

int main() {
  return myfun(false, ff) != ff(10);
}
