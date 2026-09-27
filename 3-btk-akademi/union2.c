#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Veri {
  int i;
  float d;
  float f;
  char str[25];
};

int main() {
  union Veri e;
  e.i = 5;
  e.d = 123;
  e.f = -245.12567754;
  strcpy(e.str, "Selam, nasilsin?");

  printf("sayi nedir: %d\n", e.i);

  printf("ondalikli sayi nedir: %.f\n", e.d);

  printf("karisik bir sayi: %f\n", e.f);

  printf("string turundeki ifade nedir: %s\n", e.str);

  return 0;
}