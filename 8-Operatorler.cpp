/*

OPERATÖRLER

Operatörler değişkenler ile ilgili işlemleri yapabilmemizi sağlayan araçlardır. Örnek olarak: '+', '*' vs

  - Aritmetik Operatörler

  Değerler ile işlem yapmayı sağlar

  Operatör 	  İsmi 	      Açıklama 	                                     Örnek
      + 	   Toplama 	 İki değeri toplar 	                               x + y
      - 	   Çıkarma 	 Bir değeri diğerinden çıkarır	                   x - y
      * 	   Çarpma 	 İki değeri çarpar 	                               x * y
      / 	   Bölme 	   Bir değeri diğerine böler 	                       x / y
      % 	   Modülüs 	 İlk dğerin ikinci değere bölümünden kalanı verir  x % y
      ++ 	   Artırma 	 Değeri 1 artırır 	                               ++x
      -- 	   Azaltma 	 Değerden 1 azaltır 	                             --x


  - Değer Atama Operatörleri
  Bir değişkene değer atamayı ya da var olan değerini dğiştirmeyi sağlar.

  Operatör 	  Örnek 	  Açıklama
      = 	   x = 5 	     x = 5
      += 	   x += 3 	   x = x + 3
      -= 	   x -= 3 	   x = x - 3
      *= 	   x *= 3 	   x = x * 3
      /= 	   x /= 3 	   x = x / 3
      %= 	   x %= 3 	   x = x % 3
      &= 	   x &= 3 	   x = x & 3
      |= 	   x |= 3 	   x = x | 3
      ^= 	   x ^= 3 	   x = x ^ 3
      >>= 	 x >>= 3 	   x = x >> 3
      <<= 	 x <<= 3 	   x = x << 3


  - Karşılaştırma Operatörleri

  İki değeri karşılaştırarak true ya da false değer döndürür. Örneğin 5 > 3 karşılaştırması true döndürür.

  Operatör 	İsmi 	            Örnek
    == 	    Eşit 	            x == y  (2 == 2, true döndürür)
    != 	    Eşit Değil 	      x != y 	(2 != 2, false döndürür)
    > 	    Büyüktür 	        x > y
    < 	    Küçüktür 	        x < y
    >= 	    Büyük yada Eşit 	x >= y
    <= 	    Küçük yada Eşit 	x <= y


  - Mantıksal Operatörler

  Değerler ya da değişkenler arasındaki mantıksal ilişkiyi tanımlamak içi kullanılırf

  Operatör 	İsmi 	  Açıklama 	                                          Örnek
    &&  	   Ve 	  Yalnızca iki değer de true ise true döner 	      x < 5 &&  x < 10
    ||  	   Veya 	İki değerden herhangi biri true ise true döner 	  x < 5 || x < 4
    ! 	     Tersi 	Değer true ise false yapar. False ise true yapar 	!(x < 5 && x < 10)

*/

/*
Örnek Kodlar
*/

#include <iostream>

int main(){

  int sayi1 = 5; // = ile değer sayi1'e 5 değerini atadık
  sayi1 += 3;  // sayi1 = sayi1 + 3; sayi1 şu anda 8'e eşit

  std::cout << "sayi1 = " << sayi1 << '\n';
  int bolen = 6;
  int kalan = sayi1 % bolen; // kalan sayi1(8)'in bolen'e(6) bölümünden kalana yani 2 ye eşit

  std::cout << "Sayi1'in 6'ya bölümünden kalan: " <<kalan<< '\n';

  bool altidanBuyuktur = sayi1 > 6; // sayi1 = 8 yani 6'dan büyük. O nedenle true'dur ve değeri 1'dir.
  std::cout << "sayi1 6'dan büyük ise 1 değil ise 0 yazdır: " << altidanBuyuktur <<'\n';

  bool mantiksalDeger = (sayi1 > 5) && (sayi1 < 20); // sayi1 hem 5ten büyük hem 20den küçüktür. true && true = true yani 1.

  std::cout << "sayi1'in 5 ile 20 arasında olma durumu: " << mantiksalDeger <<'\n';
  return 0;
}
