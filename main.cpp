#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Dog.h"
using namespace std;

#define SIZE 10

//Function prototypes
void sortString(string dog_trait[], int index[]);
void sortDogWeights();
void sortDogColors();
int searchDog(string name); //write this method
//it should return index of dog or -1 if not found
void printDog(); //write this method to print Dog DogInfo
//Global variables
Dog dog_array[SIZE];
Dog dog_name[SIZE];
Dog dog_weight[SIZE];
Dog dog_color[SIZE];
int name_index[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int weight_index[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int color_index[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

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
    //Set arrays for member variables
    for (int k=0; k < SIZE; k++)
      dog_name[k] = dog_array[k].getName();
    for (int k=0; k < SIZE; k++)
      dog_weight[k] = dog_array[k].getWeight();
    for (int k=0; k < SIZE; k++)
      dog_color[k] = dog_array[k].getColor();

  }
  else exit(-1);


  return 0;
}

void sortString(string dog_trait[], int index[]) {
  //Sort alphabetically by name
  string temp_trait = "";
  int temp_index = 0;
  bool swap;
  do
  {
    swap = false;
    for (int k=0; k < SIZE; k++)
    {
      if (dog_trait[k] < dog_trait[k+1]
      {
        temp_trait = dog_trait[k];
        temp_index = index[k];
        dog_trait[k] = dog_trait[k+1];
        index[k] = index[k+1];
        dog_trait[k+1] = temp_trait;
        index[k+1] = temp_index;
        swap = true;
      }
    }
  } while (swap);

  for (int k=0; k < SIZE; k++)
    cout << dog_trait[k] << " ";
}

void sortDogWeights(Dog dog_array[]) {
  //Sort from lightest to heaviest
}

void sortDogColors(Dog dog_array[]) {
  //Sort alphabetically by color
  
}

int searchDog(string name) {

}

void printDog() {
  string s = "";
  s.assign(50, '-');
  cout << "List of Dogs, Sorted by Name" <<endl;
  cout << s <<endl;
  for (int k=0; k < SIZE; k++)
  {
    cout << dog_array[name_index[k]];
  }
}
