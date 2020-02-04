// Variables


/*
int: Tam sayıları ifade eder 5, -5 gibi
double: Virgüllü sayılar  18.23, -12.20 gibi
char: Tek bir karakter tutar ve 'a', 'C' gibi ifade edilir (Tek tırnak ile)
string: Kelime ve cümleleri tutar. "Fatih" gibi ifade edilir (Çift tırnak ile)
bool: true ya da false değerleri tutar. Yani doğru ya da yanlış mantıksal ifadeleri
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
