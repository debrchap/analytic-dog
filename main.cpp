#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Dog.h"
using namespace std;

#define SIZE 10

//Function prototypes
void copyArray();
void splitMerge();
void mergeSort();
void mergeArray();
void sortDogNames();//write this method
void sortDogWeights();
void sortDogColors();
int searchDog(string name); //write this method
//it should return index of dog or -1 if not found
void printDog(); //write this method to print Dog DogInfo
//Global variables
Dog dog_array[SIZE];
Dog work_array[SIZE];

int main() {
  string name, color;
  int weight;

  ifstream file("DogInfo.txt");
  if (file)
  {
    for (int k=0; k < SIZE; k++)
    {
      file >> name >> weight >> color;
      dog_array[k].setName(name);
      dog_array[k].setWeight(weight);
      dog_array[k].setColor(color);
    }
  }
  else exit(-1);

  sortDogNames();

  return 0;
}

void copyArray(Dog A[], int first, int last, Dog B[]) {
  for (k=first; k < last; k++)
    B[k] = A[k];
}

void splitMerge(B[], first, last, A[]) {
  //if the run size is 1, end function
  if (last - first < 2)
    return;
  //split run in half
  mid = (last + first) / 2;


}

void mergeSort() {
  //Duplicate dog array into work array
  copyArray(dog_array, 0, SIZE, work_array);
  //Sort data from work array into dog array
  splitMerge();
}

void sortDogNames() {
  //Sort alphabetically by name
  string temp = "";
  bool swap;
  do
  {
    swap = false;
    for (int k=0; k < SIZE; k++)
    {
      if (dog_array[k].getName() < dog_array[k+1].getName())
      {
        temp = dog_array[k].getName();
        dog_array[k].setName(dog_array[k+1].getName());
        dog_array[k+1].setName(temp);
        swap = true;
      }
    }
  } while (swap);

  for (int k=0; k < SIZE; k++)
    cout << dog_array[k].getName() << " ";
}

/*void sortDogWeights(Dog dog_array[]) {
  //Sort from lightest to heaviest
}

void sortDogColors(Dog dog_array[]) {
  //Sort alphabetically by color
  
}

int searchDog(string name) {

}

void printDog(Dog dog_array[]) {

}*/
