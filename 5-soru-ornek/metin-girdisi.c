/*
kullanicidan metin girdi alın ve bu stringi / metini yazdirin.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  char metin[50];

  printf("Metni girin: ");

  scanf("%s", metin);

  printf("Girilen metin: %s", metin);

  return 0;
}