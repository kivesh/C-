#include "MyClass.h"
#include <iostream>


using namespace std;

MyClass::MyClass()
{
    //ctor
}

MyClass::MyClass(int a)
{
    number = a;
}

MyClass operator+(MyClass otherObj)
{
    MyClass brandNew;
    brandNew.number = number + otherObj.number;
    return(brandNew);
}
