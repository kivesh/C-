#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    map<int, int> myMap;
    myMap[1] = 2;
    myMap[2] = 4;

    myMap.insert(pair<int,int>(3,6));
    myMap.insert(pair<int, int>(4,8));
    myMap.insert(pair<int,int>(5,10));

    map<int, int>::iterator iterBegin = myMap.begin();
    map<int, int>::iterator iterEnd = myMap.end();
    for(map<int, int>::iterator iter = iterBegin; iter!=iterEnd ; iter++)
    {
     cout << iter->first << " x 2 = " << iter->second << endl;
    }


    cout << "Is there a key: 1" << endl;

    map<int, int>::iterator f = myMap.find(1);
    if(f==iterEnd)
    {
        cout << "No!" << endl;
    }
    else
    {
        cout << "Yes!" << endl;
    }



    return 0;
}
