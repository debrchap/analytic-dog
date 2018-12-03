#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Dog.h"
using namespace std;

#define SIZE 10

//Function prototypes
void sortString(string dog_trait[], int index[]);
void sortInt(int dog_trait[], int index[]);
int findDog(string name); //write this method
//it should return index of dog or -1 if not found
void printDog(); //write this method to print Dog DogInfo
//Global variables
Dog dog_array[SIZE];
string dog_name[SIZE];
int dog_weight[SIZE];
string dog_color[SIZE];
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

  sortString(dog_name, name_index);
  sortInt(dog_weight, weight_index);
  sortString(dog_color, color_index);

  printDog();

  return 0;
}

void sortString(string dog_trait[], int index[]) {
  //Sort alphabetically
  string temp_trait = "";
  int temp_index = 0;
  bool swap;
  do
  {
    swap = false;
    for (int k=0; k < SIZE; k++)
    {
      if (dog_trait[k] < dog_trait[k+1])
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

void sortInt(int dog_trait[], int index[]) {
  //Sort from smallest to largest
  int temp_trait = 0, temp_index = 0;
  bool swap;
  do
  {
    swap = false;
    for (int k=0; k < SIZE; k++)
    {
      if (dog_trait[k] < dog_trait[k+1])
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

/*int findDog(string name) {

}*/

void printDog() {
  int i = 0;
  string s = "";
  s.assign(50, '-');
  cout << "List of Dogs, Sorted by Name" <<endl;
  cout << s <<endl;
  for (int k=0; k < SIZE; k++)
  {
    name_index[k] = i;
    cout << dog_array[i].getName << dog_array[i].getWeight << dog_array[i].getColor <<endl;
  }
}
