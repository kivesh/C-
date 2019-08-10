#include <iostream>

using namespace std;

int tuna = 20;

int main()
{
    double tuna = 40;
    cout << ::tuna << endl;  //use the global - ::  variable
    cout << tuna << endl;
    return 0;
}

void myMethod()
{

}
