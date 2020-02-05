/*

HADİ BAŞLAYALIM !

C++ yazmaya başlamak için 2 birime ihtiyacımız var:

- Text Editör: Basitçe kodu düzenleyebileceğimiz Notepad benzeri bi uygulama. (Atom tavsiye edilir)
- Commpiler(Derleyici): Yazdığımız kodu bilgisayarın anlayabileceği formata dönüştüren programdır. GCC gibi

Çok sayıda text editör ve compiler mevcut fakat biz Atom ve ona ait olan bir compiler eklentisi kullanacağız
*/


/*
İlk Programımızı yazalım. Aşağıdaki kodu kopyalayın ve çalıştırın.
Ekranınızda şu yazıyı göreceksiniz:
  Merhaba. Bu benim ilk programım
*/

#include <iostream>

int main() {
  std::cout << "Merhaba. Bu benim ilk programım"<<"\n";
  return 0;
}


/*

#include <iostream>
  #include bir kütüphaneyi yüklemek için kullanılır ve burada iostream kütüphanesini yükledik
  iostream giriş ve çıkışları kullanabilmemiz için yüklediğimiz kütüphane

int main()
  Bizim ana fonksiyonumuz. Süslü parantezler {} içerisine yazdığımız her şey bu fonksiyona dahildir.
  Program çalıştığında bu fonksiyon çağırılır

std::cout
  std bizim standart kütüphanemiz. '::' kullanarak standart kütüphanemizden bir fonksiyon çağırmak istediğimizi
  belirtiyoruz. Fonksiyonumuz da 'cout' yani konsola bir şey yazdırmaya yarayan fonksiyon.

C++ dili boşlukları dikkate almaz. Dilediğiniz kadar boşluk bırakabilirsiniz

return 0; main fonksyonun bittiğini ve çıkış yapılacağını belirtir  
*/
