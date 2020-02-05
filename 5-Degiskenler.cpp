// Variables


/*
int: Tam sayıları ifade eder 5, -5 gibi
double: Virgüllü sayılar  18.23, -12.20 gibi
char: Tek bir karakter tutar ve 'a', 'C' gibi ifade edilir (Tek tırnak ile)
string: Kelime ve cümleleri tutar. "Fatih" gibi ifade edilir (Çift tırnak ile)
bool: true ya da false değerleri tutar. Yani doğru ya da yanlış mantıksal ifadeleri
 */

/*

Değişkenlere isim verirken dikkat edilmesi gerekenler:
  - Değişken isimleri yalnızca
    -harfler
    -rakamlar
    -alt tire (_) içerebilir

  - Değişken isimleri rakam ile başlayamaz
  - İsimler büyük ve küçük harflere duyarlıdır
  - İsimler boşluk ya da özel karakter içeremez
  - Değişken isimleri C++ tarafından ayrılmış isimleri alamaz (final, int vs)

*/

/*
Sabit Değer atama

Herhangi bir değişkene sabit bir değer atamak ve sonrasında kod içerisinde değişmesini engellemek için
const anahtar kelimesi başına getirilir:
  - const PI = 3; // Sonradan PI = 5; yapılırsa hata verir

*/

// Veri tiplerini yazdırma
#include <iostream>
int main() {

  // Değişken deklere etme
  int number;

  // Değişkene değer atama
  number = 24;

  // Aynı anda deklere etme ve değer atama yapılabilir
  int pi = 3;

  // Aynı anda birden fazla değişken oluşturulabilir
  int x = 5, y = 10, z = 20;

  // Değişkenin değeri kod içerisinde değiştirilebilr
  int a = 23;
  a = 25; // a artık 25 oldu

 // Veri tipi örnekleri
 int tamSayi = 45;
 double virgullu = 23.30;
 char karakter = 'f';
 std::string yazi = "fatih koprucu";
 bool karar = true;

  // tamSayi değerini ekrana yazdıralım
  std::cout << "Tamsayimiz: " << '\n';
  std::cout << tamSayi << '\n';


  // Değerleri toplayalım
  int numara1 = 3;
  int numara2 = 7;
  int toplam = numara1 + numara2;

  std::cout << "Numara 1 ve Numara 2'nin toplamı: " << toplam <<'\n';
  return 0;
}
