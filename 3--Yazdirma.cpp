/*
Yazı Bastırma

C++ dilinde konsola herhangi birşey bastırmak yani yazdirmak için 'std' kütüphanesindeki 'cout' kullanılır
Kullanım örneği şu şekildedir:
  std::cout << "Yazdırmak istediğiniz yazı";
  her satırın sonuna ';' konulmalıdır. Aksi takdirde hata verecektir. ';' ifadenin sonlandığını belirtir
  cout kullanıldıktan sonra yeni bir satıra geçmez. Aynı satırdan devam eder.
  Yeni satıra gemek için 2 yöntem vardır:
    - ifadenin sonuna '\n' eklemek
    - ifadenin sonuna << std::endl eklemek
*/

/*
Örnek Kodlar
*/

#include <iostream>

int main() {
  std::cout << "İlk satır.";
  std::cout << "İlk satıra devam.";
  std::cout << "Buradan itibaren yeni satıra geçecek\n";
  std::cout << "İkinci satır. Sonuna 'std::endl' eklendi. Yeni satıra geçecek" << std::endl;
  std::cout << "Yeni satır" << '\n';
  return 0;
}
