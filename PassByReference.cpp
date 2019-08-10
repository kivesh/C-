#include <iostream>

//passing a copy - pass by value
using namespace std;

void passByReference(int *x);
void passByValue(int x);
int main()
{
    int betty = 13;
    int sandy = 13;

    passByValue(betty);
    passByReference(&sandy); // &memory address

    cout << "Betty is now "  << betty << endl;
    cout << "Sandy is now "  << sandy << endl;


    //------------------------------------------------
    //sizeof function

    double  c[10];
    cout << sizeof(c) << endl;

    cout << sizeof(c) /sizeof(c[0]) << endl; //The size of array


    //Using math with pointers

    int arra[5];
    int *bp0 = &arra[0];
    int *bp1 = &arra[1];
    int *bp2 = &arra[2];
    cout << "bp0 is at " << bp0 << endl;
    cout << "bp1 is at " << bp1 << endl;
    cout << "bp2 is at " << bp2 << endl;

    bp0 += 2; //Changes the pointer to bp2
    cout << "bp0 is at " << bp0 << endl;
    return 0;
}

void passByValue(int x)
{
    x = 99;
}

void passByReference(int *x)
{
    *x = 66;
}
