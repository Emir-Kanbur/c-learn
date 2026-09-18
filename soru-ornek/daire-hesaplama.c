#include <stdio.h>
#include <stdlib.h>

int main() {

  float yariCap, cevre, alan, PI;

  printf("Lutfen dairenin yaricapini giriniz:");
  scanf("%f", &yariCap);

  printf("Lutfen hesaplanacak pi sayisini giriniz:");
  scanf("%f", &PI);

  cevre = 2 * PI * yariCap;

  alan = PI * yariCap * yariCap;

  printf("Dairenin Cevresi: %f\n", cevre);

  printf("Dairenin Alani: %f\n", alan);

  return 0;
}