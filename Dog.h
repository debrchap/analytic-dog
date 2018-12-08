#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
using namespace std;

#define SIZE 10 //number of dogs in data file

class Dog{
  //keep information hidden
  private:
  string breed;
  int weight;   //note this is public  
  string color;

  //create a public interface for access
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

//Function prototypes
void openFile();
Dog* sortBreed();
Dog* sortWeight();
Dog* sortColor();
void printDog(string trait, Dog* ptr);

#endif
