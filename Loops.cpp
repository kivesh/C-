#include <iostream>

using namespace std;

int main()
{

    cout << "Printing numbers one to 10" << endl;
    for(int i=1;i<11;i++)
    {
        cout << i << endl;
    }

    cout << "\n\n\nCalculating the avg ages of a group of people." << endl;

    int ans =0;
    int noOfPeople = 0; //To remember the number of people
    int sumOfAges =0;

    cout << "Enter a persons age or -1 to exit" << endl;
    cin >> ans;

    while(ans != -1)
    {
       sumOfAges += ans;
       noOfPeople++;

        cout << "Enter a persons age or -1 to exit" << endl;
        cin >> ans;
    }


    cout << "The sum of ages is : " << sumOfAges << endl;
    cout << "Number of people entered: " << noOfPeople <<endl;

     if(noOfPeople > 0)
     {
        int avg = sumOfAges/noOfPeople;
        cout << "The average of all ages is: " << avg << endl;
     }


     cout << "\n\n\n Using the do while loop" << endl;

     int x =1;
     do
     {
         cout << x << endl;
         x++;
     }
     while(x <= 10);
     return 0;
}
