#include <stdio.h>

union veri {

  int i;
  double d;
};

int main() {
  union veri v;

  v.i = 42;

  printf("int degeri: %d\n", v.i);

  v.d = 3.12;

  printf("double degeri: %.2f\n", v.d);

  printf("eski deger (bozuldu): %d\n", v.i);

  return 0;
}