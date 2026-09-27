#include <stdio.h>

struct Ogrenci {

  char isim[15];
  int numarasi;
  double not;
};

int main() {
  struct Ogrenci ogr1 = {"Efekan", 156, 87.65};

  printf("isim: %s\n", ogr1.isim);
  printf("numara: %d\n", ogr1.numarasi);
  printf("notu: %.2f\n", ogr1.not);

  return 0;
}