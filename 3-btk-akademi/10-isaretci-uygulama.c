#include <stdio.h>

int main() {
  int sayi1, sayi2, toplam;
  int *isaretci1, *isaretci2;

  printf("lutfen iki sayi girin:");

  isaretci1 = &sayi1;
  isaretci2 = &sayi2;

  scanf("%d%d", isaretci1, isaretci2);

  toplam = *isaretci1 + *isaretci2;

  printf("toplam: %d ", toplam);

  return 0;
}