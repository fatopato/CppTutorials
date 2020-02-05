
/*

VERİ TİPLERİ

Temel Veri Tipleri

  -int: 4 bayttır. Tam sayı değerlerini tutar
  -float: 4 bayttır. Virgüllü sayıları tutar. 7 basamaklı sayılara kadar tutabilir
  -double: 8 bayttır. float gibi Virgüllü sayıları tutar. 15 basamaklı sayılara kadar tutabilir
  -boolean: 1 bayttır. true yada false değer tutar
  -char: 1 bayttır. Tek bir karakter tutar

  Float vs double
  İkisi arasındaki en büyük fark netlik farkıdır. Float 7 basamağa kadar tutar. Double 15 basamağa kadar tutabilr.
  Virgülden sonraki değerler sizin için önemli ise ve doğruluğa önem veriyorsanız double kullanmak daha doğru
  olacaktır.
  Float ve double ile bilimsel terimler de yazılabilir. Örneğin üstel değeri ifade eden 'e' float ve double ile
  kullanılabilr.
  Örnek: float number = 32e3; // number = 32000

  Boolean Tipleri

  Boolean Tipleri true yada false yani doğru yada yanlış değerleri tutar. 'bool' ile ifade edilir.
  - true = 1
  - false = 0 değerini döndürür

  Örnek: bool gecisGerceklesti = false; // gecisGerceklesti değeri false yani yanlış değer alır.0 döndürür


  Char Tipleri

  char yalnızca tek bir karakter tutar. Aynı zamanda ASCII karakterleri de tutmada kullanılır.

  Örnek: char ilkHarf = 'f';



String Tipleri

  String veri tipi karakter diziilerini tutar. Tırnak("") işaretleri arasında ifade edilir.
  std kütüphanesinden çağırılabilir

  Örnek: std::string isim = "Fatih";

*/

/*
Örnek Kod: Bu kod ile öğrenciden sınav notlarını isteyip ortamlamasını alacağız ve bir harf notu vereceğiz.
-string ile öğrenci adı
-int ile notlarını
-double ile ortamlamasını
-char ile de harf notunu tutacağız
*/

#include <iostream>

int main() {

  int not1, not2, not3;
  double ortalama;
  char harfNotu;
  std::string isim, soyisim;

  std::cout << "Merhabalar Adınız:" << '\n';
  std::cin >> isim;
  std::cout << "Soydınız:" << '\n';
  std::cin >> soyisim;
  std::cout << "İlk Notunuz: " << '\n';
  std::cin >> not1;
  std::cout << "İkinci Notunuz: " << '\n';
  std::cin >> not2;
  std::cout << "Üçüncü Notunuz: " << '\n';
  std::cin >> not3;

  ortalama = (not1 + not2+ not3)/3.0;

  std::cout << "Harf Notunuz: " << '\n';
  std::cin >> harfNotu;

  std::cout << "Sayın " << isim <<", ortalamanız: " << ortalama << ", harf notunuz: "<<harfNotu<< '\n';
  std::cout << "İyi çalışmalar" << '\n';
  return 0;
}
