#include "animal.h"
#include <iostream>
using namespace std;

Animal::Animal() {}

Animal::~Animal(){
    cout << "Animal Destructor." << endl;
}

void Animal::callOut()
{
    cout << "Animal is making noice." << endl;
}
