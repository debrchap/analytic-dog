//Implementation File for Dog File
//This is the secret recipe file
#include "Dog.h"
//default constructor
  Dog::Dog(){
    name="";
    weight=0;
    color="";
  }
// regular constructor
  Dog::Dog(string myName,int myWeight,string myColor){
    name = myName;
    weight = myWeight;
    color = myColor;
  }

  int Dog::getAge(){
    return weight;
  }
  void Dog::setWeight(int myWeight){
    weight=myWeight;
  }

string Dog::getColor(){
  return color;
}
void Dog::setColor(string myColor){
  color = myColor;
}
string Dog::getName(){
  return name;
}
void Dog::setName(string myName){
  name = myName;
}
