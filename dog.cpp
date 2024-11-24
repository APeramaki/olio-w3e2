#include "dog.h"
#include <iostream>
using namespace std;

Dog::Dog() {}

Dog::~Dog() {
    cout << "Dog Destructor." << endl;
}

void Dog::callOut() {
    cout << "Dog is barking!" << endl;
}
