#include <iostream>
#include <string>
#include "Dog.h"
using namespace std;

int main() {
  
  openFile();
  printDog("Breed", sortBreed());
  cout << endl;
  printDog("Weight", sortWeight());
  cout << endl;
  printDog("Color", sortColor());
  return 0;
}
