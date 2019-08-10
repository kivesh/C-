#include <iostream>

using namespace std;

int main()
{
    int numOne ;
    int numTwo;

    cout << "Enter the first number" << endl;
    cin >> numOne;

    cout << "Enter the second number" << endl;
    cin>> numTwo;

    int sum = numOne + numTwo;
    int division = numOne/numTwo;
    int subtract = numOne - numTwo;
    int product = numOne * numTwo;

    cout <<"The sum is : " << sum<< endl;
    cout <<"The subtraction is: "<< subtract<< endl;
    cout <<"The product is: " << product<< endl;
    cout <<"The division is: " << division<<endl;

    return 0;
}
