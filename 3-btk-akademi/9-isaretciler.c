#include <stdio.h>

int main() {
  int sayi = 10;
  int *isaretci;

  // sayi değişkenin adresi, isaretci isimli işaretçi (pointer yani)
  // * tipi değişken tarafından tutulur.

  isaretci = &sayi;

  printf("sayi degiskeninin adresi = %p\n", &sayi);

  printf("sayi degiskeninin icerigi = %d\n", sayi);

  printf("sayi degiskenin icerigi = %d\n", *isaretci);

  return 0;
}