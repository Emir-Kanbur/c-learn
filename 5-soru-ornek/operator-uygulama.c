#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y, toplam, kalan, carpim, bolum, mod;

  x = 15;

  y = 8;

  toplam = x + y;

  kalan = x - y;

  carpim = x * y;

  bolum = x / y;

  mod = x % y;

  printf("toplam: %d\n", toplam);

  printf("kalan: %d\n", kalan);

  printf("carpim: %d\n", carpim);

  printf("bolum: %d\n", bolum);

  printf("mod: %d\n", mod);

  x++;

  printf("x nedir: %d ", x);

  return 0;
}