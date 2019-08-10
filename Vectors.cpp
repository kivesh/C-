#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool f(int x, int y)
{

    return x > y;
}

int main()
{
    cout << "Hello world!" << endl;

    vector<int> myVec;
    myVec.push_back(34);
    myVec.push_back(2);
    myVec.push_back(9);

    cout << myVec[0] << " " << myVec[1] << " " << myVec[2] << endl;
    vector<int>::iterator iterBegin = myVec.begin();
    vector<int>::iterator iterEnd = myVec.end();


    sort(iterBegin, iterEnd);

    for(vector<int>::iterator iter = iterBegin; iter!=iterEnd ; iter++)
    {
            cout << *iter << endl;
    }

        cout << "The second element is: " << *(++iterBegin) << endl;
        --iterBegin;

    myVec.push_back(34);
    myVec.push_back(34);
    myVec.push_back(34);

    //Getting correct iterators and sorting again
    iterBegin = myVec.begin();
    iterEnd = myVec.end();


    sort(iterBegin, iterEnd);
    vector<int>::iterator  firstOccurence = lower_bound(iterBegin, iterEnd, 34);
    vector<int>::iterator lastOccurence = upper_bound(iterBegin, iterEnd, 34);

    cout << "The number of 34s is: " << (lastOccurence - firstOccurence) << endl;

    cout << "Sorting is descending: " << endl;

    sort(iterBegin , iterEnd ,f);
    for(vector<int>::iterator iterP = iterBegin; iterP!=iterEnd ; iterP++)
    {
        cout << *iterP << endl;
    }
    return 0;
}
