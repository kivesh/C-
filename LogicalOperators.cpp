#include <iostream>

using namespace std;

int main()
{
    int age = 23;
    int money =750;

    if( age > 21 && money> 500)
    {
        cout << "You are allowed in!" << endl;
    }

    if(age > 21 || money > 2000) //Considered a bribe
    {
        cout << "You are allowed in!" << endl;
    }
    return 0;
}
