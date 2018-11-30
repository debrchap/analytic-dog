#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

#define SIZE 10

void sortDogs(Dog []);//write this method
int searchDog(string name); //write this method
//it should return index of dog or -1 if not found
void printDog(Dog); //write this method to print Dog DogInfo

int main() {
  string name, color;
  int weight;
  Dog DogsArray[SIZE];
  ifstream file("DogInfo.txt");
  if (file)
  {
    for (int i=0; i < SIZE; i++)
    {
      file >> name >> weight >> color;
      DogsArray[i].setName(name);
      DogsArray[i].setWeight(weight);
      DogsArray[i].setColor(color);
    }
  }
  else exit(-1);

return 0;
}

void sortDogs(Dog []) {
  
}

int searchDog(string name) {

}

void printDog(Dog) {

}
