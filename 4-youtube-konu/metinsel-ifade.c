/*
Char tipinde string ifadesi alma
dizi işareti [] veya * işareti kullanilir.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  char sehir[] = "Zonguldak";

  printf("Sehriniz: %s", sehir);

  printf("\n");

  char vilayet[3] = "Van";

  printf("Vilayet: %s", vilayet);

  return 0;
}