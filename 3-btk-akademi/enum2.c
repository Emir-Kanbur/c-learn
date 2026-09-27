#include <stdio.h>

enum Seviye {

  Dusuk = 14,
  Orta = 21,
  Yuksek = 30,
};

int main() {
  enum Seviye OdaSicakligi = Orta;

  if (OdaSicakligi == Orta) {
    printf("Oda sicakligi orta %d\n", OdaSicakligi);
  }

  return 0;
}