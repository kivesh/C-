#include "People.h"
#include "Birthday.h"
#include <iostream>

People::People(string x ,Birthday Bo)
: name(x), dateOfBirth(Bo)
{
}

void People:: printInfo()
{
    cout <<  name << " was born on ";
    dateOfBirth.printDate();

}
