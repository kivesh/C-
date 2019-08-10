#include <iostream>

using namespace std;

   int arrayInteger[] = {9, 99  ,999};

int* returnAPointer()
{

    return arrayInteger;
}
int main()
{
    cout << "Hello world!" << endl;


    int arrayInt[10];

    cout << arrayInt[0] << endl;

    int *pointToArrayInt;
    pointToArrayInt = arrayInt;

    pointToArrayInt[0] = 1;
    pointToArrayInt[1] = 5;
    pointToArrayInt[2] = 10;

    cout << "ArrayName [ ]" << endl;
    cout << arrayInt[0] << endl;

    cout << "Array name and subscript element. " << endl;
       for(int k=0;k<3;k++)  //array name and subscript element
    {

        cout << *(arrayInt + k)<< endl;

    }


    cout << "Using a pointer. " << endl;
    for(int j=0;j<3;j++) //Using a pointer
    {
        cout << *pointToArrayInt<< endl;
        pointToArrayInt++;
    }

    pointToArrayInt = arrayInt;
    cout << "Pointer and subscript element. " << endl;
       for(int k=0;k<3;k++)
    {

        cout << *(pointToArrayInt + k)<< endl;

    }


   pointToArrayInt = returnAPointer();
    cout << "Pointer to function that returns pointer. " << endl;
       for(int k=0;k<3;k++)
    {

        cout << *(pointToArrayInt + k)<< endl;

    }
    return 0;
}
A
