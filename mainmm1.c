#include <stdio.h>
#include <math.h>

int main(void) {
	char ogrenci[20]= "	Melek Oral"; 
	char ogrencinum [20] = "1220505054";
	
	printf("******** BALONUN ZAMANA GORE YUKSEKLIGINI HESAPLAMA********\n\n\n");
	
	printf("ogrenci adi:%s\n",ogrenci);
	printf("ogrenci numarasi: %s\n\n",ogrencinum);
	
  int t = 1;
  
  while (t < 11) {
  	
    double h = 0.12 * pow(t, 4) + 12 * pow(t, 3) - 380 * pow(t, 2) + 4100 * t +220;//pow ile sayinin ussunu aldiriyoruz
    printf("%d Zamandaki Yükseklik: %.2f\n", t, h); //bulunan sonucu yazdirma islemi
    t++; //fonsiyon ve dongu kullanarak balonun 10 saate kadar yuksekligini hesapladik
  }
  return 0;
}

