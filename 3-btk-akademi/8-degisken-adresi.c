#include <stdio.h>

int main() {
  char karakter = 'C';
  int tamsayi = 1;
  float gercel_sayi = 10.4f;
  long long buyuk_tamsayi = 9898989889ll;

  /*
  Ampersand (and per se and) olarak da anılan & işareti ile herhangi bir
  değişkenin bellekte tutulduğu adresi alınabilir
  */
  // Print variable value with their memory adress

  printf("Karakterinin degeri %c, karakter degiskenin adresi = %p\n", karakter,
         &karakter);

  printf("Tamsayinin degeri %d, tamsayi degerinin adresi = %p\n", tamsayi,
         &tamsayi);

  printf("Gercel sayi degeri %f, gercel sayinin adresi = %p\n", gercel_sayi,
         &gercel_sayi);

  printf("Buyuk tam sayi degeri %lld, buyuk tam sayinin adresi = %p",
         buyuk_tamsayi, &buyuk_tamsayi);

  return 0;
}
