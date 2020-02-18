#include "iostream"
#include <unistd.h>

const int maxFloor = 10;
const int minFloor = -3;
const int initialFloor = 0;
int currentFloor;
int calledFloor;
int targetFloor;

void goDown(){
  if(currentFloor > minFloor){
    std::cout << "Going down.." << '\n';
    currentFloor--;
    std::cout << "We are now on floor" << currentFloor << '\n';
    usleep(500000);
  }
}

void goUp(){
  if(currentFloor < maxFloor){
    std::cout << "Going up..." << '\n';
    currentFloor++;
    std::cout << "We are on now floor " << currentFloor << '\n';
    usleep(500000);
  }
}

void setCalledAndTargetFloors(){
  std::cout << "\nWhich floor are you on: " << '\n';
  std::cin >> calledFloor;
  if((calledFloor < minFloor || calledFloor > maxFloor)){
    throw 1;
  }

  if((targetFloor < minFloor || targetFloor > maxFloor)){
    throw 1;
  }

  std::cout << "Which floor you want to reach: " << '\n';
  std::cin >> targetFloor;


}
void goToTargetFloor(){
  if(currentFloor > targetFloor){
    while(currentFloor != targetFloor){
      goDown();
    }
  }else if(currentFloor < targetFloor){
    while(currentFloor != targetFloor){
      goUp();
    }
  }else{
    std::cout << "The elevator is there" << '\n';
  }
}

// TODO: Make it with changeable floor
void goToCalledFloor(){
  while(currentFloor != calledFloor){
    if(currentFloor > calledFloor){
      goDown();
      }else if(currentFloor < calledFloor){
        goUp();
      }
    }
    std::cout << "We are here hop on!" << '\n';
    goToTargetFloor();
}

int main(){

  //int currentFloor = initialFloor;

  while(true){

    try{

      std::cout << "The elevator on floor " << currentFloor << '\n';
      usleep(500000);
      setCalledAndTargetFloors();
      goToCalledFloor();

    }catch(int e){
      if(e == 1){
        std::cout << "The floor must be between " << minFloor << " and " << maxFloor << '\n';
      }
    }
  }

  return 0;
}
