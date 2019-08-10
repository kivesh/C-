#include <iostream>

using namespace std;

int calculateFactorial(int x)
{
    if(x == 1) // base case
    {
        return 1;
    }
    else
    {
        return x * calculateFactorial(x-1);
    }
}
int main()
{
    cout << calculateFactorial(5) << endl;
    return 0;
}
