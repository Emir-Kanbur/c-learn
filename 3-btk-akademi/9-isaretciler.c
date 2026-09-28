#include <stdio.h>

int main() {
  int sayi = 10;
  int *isaretci;

  isaretci = &sayi;

  // sayi'nin kendi adresi
  printf("sayi degiskeninin adresi           = %p\n", (void *)&sayi);

  // sayi'nin icindeki tamsayi deger
  printf("sayi degiskeninin degeri           = %d\n", sayi);

  // isaretci'nin icinde saklanan adres (sayi'nin adresidir)
  printf("isaretcinin tuttugu adres          = %p\n", (void *)isaretci);

  // isaretci degiskeninin bellekteki kendi adresi
  printf("isaretcinin kendi bellek adresi    = %p\n", (void *)&isaretci);

  // isaretci'nin gosterdigi yerdeki deger (dereferencing)
  printf("isaretcinin isaret ettigi deger    = %d\n", *isaretci);

  return 0;
}