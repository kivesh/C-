#include <iostream>

using namespace std;

template<typename T>
T minimum(const T &A , const T &B)
{
     if( A < B)
     {
         return A;
     }
     else
     {
         return B;
     }
}



int main()
{


    int A = 1;
    int B = 2;
    int &refA = A;
    int &refB = B;
    cout << "A is : " << A << "\t" << "B is: " << B << endl;
    cout << "The minimum is : " <<minimum(A,B) << endl;


    char C = 'D';
    char D = 'A';

     cout << "A is : " << C << "\t" << "B is: " << D << endl;
    cout << "The minimum is : " <<minimum(C,D) << endl;

    return 0;
}
