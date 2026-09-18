#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y;

  x = 5;

  printf("x kaçtir: %d\n", x);

  y = 3;

  printf("y kaçtir: %d\n", y);

  x++;

  printf("x kaçtir: %d\n", x);

  y--;

  printf("y kaçtir: %d\n", y);

  --x;

  printf("x kaçtir: %d\n", x);

  --y;

  printf("y kaçtir: %d\n", y);

  return 0;
}