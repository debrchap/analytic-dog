#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
using std::string;
class Dog{
  //attributes or data section

  private:  //keep information hidden
  string name;
  int weight;   //note this is public  
  string color;

  public: //create a public interface for access

//default constructor header
  Dog();
// regular constructor header
  Dog(string myName,int myWeight,string myColor);

  int getWeight();
  void setWeight(int myWeight);
  string getColor();
  string getName();
  void setName(String name);
  void setColor(String color);
};
#endif
