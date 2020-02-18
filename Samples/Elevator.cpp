#include "iostream"

const int maxDoor = 10;

class Door{

private:
  std::string name;
  int floor;
  bool upButton;
  bool downButton;

public:
  Door(std::string n, int f){
    name = n;
    floor = f;
  }

  void setName(std::string name){
    this->name = name;
  }

  std::string getName(){
    return this->name;
  }

  void setFloor(int floor){
    this->floor = floor;
  }

  int getFloor(){
    return this->floor;
  }

  bool getUpButton(){
    return this->upButton;
  }

  bool getDownButton(){
    return this->downButton;
  }

  void pushUpButton(){
    this->upButton = true;
  }

  void pushDownButton(){
    this->downButton = true;
  }

  void resetUpButton(){
    this->upButton = false;
  }

  void resetDownButton(){
    this->downButton = false;
  }

};

int main(){

  Door floor1("floor1", 1);

  std::cout << "Upbutton: " << floor1.getUpButton() << '\n';
  floor1.pushUpButton();
  std::cout << "Upbutton: " << floor1.getUpButton()<< '\n';
  return 0;
}
