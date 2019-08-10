#include <iostream>

using namespace std;

void printNumber(int x);
void printNumber(float x);

int main()
{
    int a = 54;
    float b = 32.5656;

    printNumber(a);
    printNumber(b);
    return 0;
}

void printNumber(int x)
{
    cout<< "Integer is: " << x << endl;
}

void printNumber(float x)
{
    cout << "Float is : " << x << endl;
}
