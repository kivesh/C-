#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0)); //seed a random number, to change the algorithm
    //time(0) calculates the number of seconds since 1970
    for(int x = 1; x < 25; x++)
    {
        cout << 1+(rand()%6) << endl;
    }
    return 0;
}
