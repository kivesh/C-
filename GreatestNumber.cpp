#include <iostream>

using namespace std;

int main()
{
    int A,B;
    cout << "Enter number A:" << endl;
    cin >> A;

    cout << "Enter number B:" << endl;
    cin >> B;

    cout << "A: " << A << endl;
    cout << "B: " << B << endl;
    if(A > B)
    {
        cout << "A > B\n";
    }
    else if(A < B)
    {
        cout << "A < B\n";
    }
    else
    {
        cout << "A = B";
    }
    return 0;
}
