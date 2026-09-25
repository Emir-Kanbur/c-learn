#include <stdio.h>

#include <stdlib.h>

int main() {
  char benimHarf = 'E';
  int sayi = 123;
  char *metin = "selam, nasilsin?";
  // char metin [] = "selam, nasilsin?";
  double sayilar = 123.123;
  int tamSayi = 12;
  float buyukSayi = 1234.1234567;

  printf("%c\n", benimHarf);

  printf("%d\n", sayi);

  printf("%c\n", *metin);

  printf("%lf\n", sayilar);

  printf("%d\n", tamSayi);

  printf("%f\n", buyukSayi);

  return 0;
}