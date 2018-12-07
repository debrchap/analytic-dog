#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
using namespace std;

#define SIZE 10
//Function prototypes
void openFile();
void sortBreed();
void sortWeight();
void sortColor();

class Dog{
  private:  //keep information hidden
  string breed;
  int weight;   //note this is public  
  string color;

  public: //create a public interface for access

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
