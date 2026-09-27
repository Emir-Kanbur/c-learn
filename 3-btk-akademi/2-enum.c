#include <stdio.h>

enum gunler {

  Pazartesi = 1,
  Sali,
  Carsamba,
  Persembe,
  Cuma,
  Cumartesi,
  Pazar,
};

int main() {

  enum gunler bugun = Pazar;

  if (bugun == Pazar) {

    printf("Haftanin kacinci gunu: %d\n", bugun);
  }
  return 0;
}
