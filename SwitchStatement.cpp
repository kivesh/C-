#include <iostream>

using namespace std;

int main()
{
   int age = 21;

   switch(age)
   {
        case 16:
            cout << "Hey you can drive now!" << endl;
            break;
        case 18:
            cout << "Go buy some lotto tickets!" << endl;
            break;
        case 21:
            cout << "Buy me some beer" << endl;
            break;
        default:
            cout << "Sorry you get nothing" << endl;
    }
}
