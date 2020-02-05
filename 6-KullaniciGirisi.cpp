/*
KULLANICI GİRİŞİ

Konsola herhangi bir şey yazdırmak için cout fonksiyonu kullanıyorduk. Kullanıcıdan girdi almak içinse
cin fonksiyonunu kullancağız. Örnek kullanım:

int x;
cin >> x;

Kullanıcı bir değer girdiğinde, girilen tam sayı değeri x'e atanacaktır

*/


/*

Kullanıcı bilgilerini alan bir program yazalum

*/


#include <iostream> // Giriş ve Çıkış kütüphanemizi ekleyelim
int main() {
  int yas, girisYili; // Kullancının yaşı, maaşı ve giriş yılını int olarak tanımladık
  std::string isim, departman; // Kullanıcın ismi ve departmanını tanımladık

  std::cout << "Merhaba. Lütfen Adınızı Girin: " << '\n';
  std::cin >> isim;
  std::cout << "Departmanınız: " << '\n';
  std::cin >> departman;
  std::cout << "Yaşınız: " << '\n';
  std::cin >> yas;
  std::cout << "İşe başladığınız yıl: " << '\n';
  std::cin >> girisYili;

  std::cout << "Merhaba Sayın " << isim << '\n';
  std::cout << girisYili <<" yılından beri şirketimize "<< departman<<" departmanında hizmet ediyorsunuz"<< '\n';
  std::cout << "Teşekkür Ederiz" << '\n';
  return 0;
}
