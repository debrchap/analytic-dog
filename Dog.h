#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
using namespace std;

#define SIZE 10
//Function prototypes
void openFile();
void sortBreed();


class Dog{

  private:
  string breed;
  int weight;  
  string color;

  public: 

//default constructor header
  Dog();
// regular constructor header
  Dog(string myBreed, int myWeight, string myColor);

  int getWeight();
  void setWeight(int myWeight);
  string getColor();
  string getBreed();
  void setBreed(string breed);
  void setColor(string color);
};
#endif
