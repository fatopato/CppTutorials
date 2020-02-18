

#include <iostream>

class Student{

public:

  Student(){

  }
  Student(int id, std::string name){
    this->id = id;
    this->name = name;
  }

  void setId(int id){
    this->id = id;
  }

  int getId(){
    return this->id;
  }

  void setName(std::string name){
    this->name = name;
  }

  std::string getName(){
    return this->name;
  }
private:
  int id;
  std::string name;

};


int main(){

  Student students[10];
  students[0] = Student(2, "fatopat0");

  std::cout << students[0].getName() << '\n';
  Student student1(1, "fatih");

  std::cout << student1.getName() << '\n';

  return 0;
}
