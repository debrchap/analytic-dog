//Implementation File for Dog File
#include "Dog.h"
#include <fstream>
//default constructor
  Dog::Dog(){
    breed = "";
    weight = 0;
    color = "";
  }
// regular constructor
  Dog::Dog(string myBreed, int myWeight, string myColor){
    breed = myBreed;
    weight = myWeight;
    color = myColor;
  }

int Dog::getWeight(){
  return weight;
}
void Dog::setWeight(int myWeight){
  weight = myWeight;
}

string Dog::getColor(){
  return color;
}
void Dog::setColor(string myColor){
  color = myColor;
}
string Dog::getBreed(){
  return breed;
}
void Dog::setBreed(string myBreed){
  breed = myBreed;
}

//Global variables
Dog* dog_ptr = NULL;
Dog* breed_ptr = NULL;
Dog* weight_ptr = NULL;
Dog* color_ptr = NULL;
int last = SIZE - 1;

void openFile() {
  string breed, color;
  int weight;

  dog_ptr = new Dog[SIZE];

  ifstream file("DogInfo.txt");
  if (file)
  {
    for (int k=0; k < SIZE; k++)
    {
      file >> breed >> weight >> color;
      dog_ptr[k].setBreed(breed);
      dog_ptr[k].setWeight(weight);
      dog_ptr[k].setColor(color);
    }

    cout << dog_ptr[2].getBreed() << endl;

    breed_ptr = dog_ptr;
    weight_ptr = dog_ptr;
    color_ptr = dog_ptr;

    cout << weight_ptr[2].getBreed() << endl;
  }
}


void sortBreed() {
  Dog* temp_ptr;
  bool swap;
  do
  {
    swap = false;
    for (int k=0; k < last; k++)
    {
      if ((breed_ptr[k].getBreed()).compare(breed_ptr[k+1].getBreed()) > 0)
      {
        temp_ptr = (breed_ptr + k);
        breed_ptr[k] = breed_ptr[k+1];
        breed_ptr[k+1] = *temp_ptr;
        swap = true;
      }
    }
  } while (swap);
  
  for (int k=0; k < SIZE; k++)
    cout << breed_ptr[k].getBreed() << " " << breed_ptr[k].getWeight() << " " << breed_ptr[k].getColor() << endl;
}

void sortWeight() {
  Dog* temp_ptr;
  bool swap;
  do
  {
    swap = false;
    for (int k=0; k < last; k++)
    {
      if (weight_ptr[k].getWeight() > weight_ptr[k+1].getWeight())
      {
        temp_ptr = (weight_ptr + k);
        weight_ptr[k] = weight_ptr[k+1];
        weight_ptr[k+1] = *temp_ptr;
        swap = true;
      }
    }
  } while (swap);

  for (int k=0; k < SIZE; k++)
    cout << weight_ptr[k].getBreed() << " " << weight_ptr[k].getWeight() << " " << weight_ptr[k].getColor() << endl;
}

void sortColor() {
  Dog* temp_ptr;
  bool swap;
  do
  {
    swap = false;
    for (int k=0; k < last; k++)
    {
      if ((color_ptr[k].getColor()).compare(color_ptr[k+1].getColor()) > 0)
      {
        temp_ptr = (color_ptr + k);
        color_ptr[k] = color_ptr[k+1];
        color_ptr[k+1] = *temp_ptr;
        swap = true;
      }
    }
  } while (swap);
  
  for (int k=0; k < SIZE; k++)
    cout << color_ptr[k].getBreed() << " " << color_ptr[k].getWeight() << " " << color_ptr[k].getColor() << endl;
}
