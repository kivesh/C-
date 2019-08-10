#include <iostream>
#include <set>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    set<int> mySet;
    mySet.insert(-1);
    mySet.insert(-1);
    mySet.insert(-10);
    mySet.insert(-2);
    mySet.insert(3);
    mySet.insert(0);
    mySet.insert(1);

    set<int>::iterator iterBegin = mySet.begin();
    set<int>::iterator iterEnd = mySet.end();

    for(set<int>::iterator iter= iterBegin; iter!=iterEnd ; iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;



    cout << "Is 2 in the Set: " ;

    set<int>::iterator it = mySet.find(2);

    if(it == iterEnd)
    {
        cout << "False" << endl;
    }
    else
    {
        cout << "True"  << endl;
    }


    cout << "Is -1 in the Set: " ;

    set<int>::iterator ite = mySet.find(-1);

    if(ite == iterEnd)
    {
        cout << "False" << endl;
    }
    else
    {
        cout << "True"  << endl;
    }


    cout << "Is there a number greater than -1: ";
    set<int>::iterator upper = mySet.upper_bound(-1);
    if(upper == iterEnd)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << *upper << endl;
    }

      cout << "Is there a number greater than or equal to -1: ";
    set<int>::iterator low = mySet.lower_bound(-1);
    if(low == iterEnd)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << *low << endl;
    }
    return 0;
}
