#include <stdio.h>
#include <stdlib.h>

int main() {
  float sayi1, sayi2, sayi3, sayi4;

  printf("Sayilari giriniz: ");
  scanf("%f %f %f %f", &sayi1, &sayi2, &sayi3, &sayi4);

  printf("Sayinin kendisi %f\n", sayi1);
  printf("Sayinin karesi %f\n", sayi1 * sayi1);
  printf("Sayinin kupu %f\n", sayi1 * sayi1 * sayi1);
  print("Sayinin karesinin karesi %f\n", sayi1 * sayi1 * sayi1 * sayi1);

  return 0;
}