//Implementation File for Dog File
#include "Dog.h"
#include <fstream>
//default constructor
  Dog::Dog(){
    breed = "";
    weight = 0;
    color = "";
  }
//regular constructor
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

    breed_ptr = dog_ptr;
    weight_ptr = dog_ptr;
    color_ptr = dog_ptr;
  }
}


Dog* sortBreed() {
  int smallest;
  for (int i=0; i < last; i++)
  {
    smallest = i;
    for (int index = i + 1; index < SIZE; index++)
      if ((breed_ptr[index].getBreed()).compare(breed_ptr[smallest].getBreed()) < 0)
        smallest = index;
    swap(breed_ptr[i], breed_ptr[smallest]);
  }
  return breed_ptr;
}

Dog* sortWeight() {
  int smallest;
  for (int i=0; i < last; i++)
  {
    smallest = i;
    for (int index = i + 1; index < SIZE; index++)
      if (weight_ptr[index].getWeight() < weight_ptr[smallest].getWeight())
        smallest = index;
    swap(weight_ptr[i], weight_ptr[smallest]);
  }
  return weight_ptr;
}

Dog* sortColor() {
  int smallest;
  for (int i=0; i < last; i++)
  {
    smallest = i;
    for (int index = i + 1; index < SIZE; index++)
      if ((color_ptr[index].getColor()).compare(color_ptr[smallest].getColor()) < 0)
        smallest = index;
    swap(color_ptr[i], color_ptr[smallest]);
  }
  return color_ptr;
}

void printDog(string trait, Dog* ptr) {
  string s = "";
  s.assign(50, '-');
  cout << "List of Dogs, Sorted by "<< trait <<endl;
  cout << s <<endl;
  for (int k=0; k < SIZE; k++)
    cout << ptr[k].getBreed() << " " << ptr[k].getWeight() << " " << ptr[k].getColor() << endl;
}
