#include <stdio.h>
#include <string.h>

// 1. Sadece şablon/tip tanımı (içine işlem veya atama YAZILMAZ):
struct PersonelBilgisi {
  char Isim[50];
  char Cinsiyet[10];
  int Yas;
  int Maas;
};

int main(void) {
  // 2. Değişkeni fonksiyon içinde oluşturuyoruz:
  struct PersonelBilgisi Personel1;

  // 3. Değer atamaları ve işlemler burada yapılır:
  strcpy(Personel1.Isim, "Emir");
  strcpy(Personel1.Cinsiyet, "Erkek");
  Personel1.Yas = 20;
  Personel1.Maas = 23000;

  // 4. Ekrana yazdırma:
  printf("Personelin adi: %s\n", Personel1.Isim);
  printf("Personelin cinsiyeti: %s\n", Personel1.Cinsiyet);
  printf("Personelin yasi: %d\n", Personel1.Yas);
  printf("Personelin maasi: %d\n", Personel1.Maas);

  struct PersonelBilgisi Personel2;

  strcpy(Personel2.Isim, "Ahmet");
  strcpy(Personel2.Cinsiyet, "Erkek");
  Personel2.Yas = 40;
  Personel2.Maas = 12345;

  printf("Personel2 adi: %s\n", Personel2.Isim);
  printf("Personel2 cinsiyeti: %s\n", Personel2.Cinsiyet);
  printf("Personel2 yas: %d\n", Personel2.Yas);
  printf("Personel2 maas: %d\n", Personel2.Maas);

  return 0;
}