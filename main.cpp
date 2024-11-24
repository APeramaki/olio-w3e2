#include <iostream>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{
    {
        Animal genericAnimal;
        genericAnimal.callOut();
    } // animal destructor is called

    cout << endl;
    {
        Dog dog;
        dog.callOut();
    } // dog and animal destructors are called

    return 0;
}
