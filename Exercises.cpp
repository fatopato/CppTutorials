void addFive(int &number) {
  number += 5;
}

#include <iostream>
int main() {
  int a = 20;
  addFive(a);
  std::cout << "Now a is: " << a << std::endl;
  return 0;
}
