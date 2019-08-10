#include <iostream>
using namespace std;

class StankFist{
    public:
        StankFist(){stinkyVar = 0;}
          int stinkyVar;
    private:

    friend void stinksFriend(StankFist &sfo);//!!!!!!!!!!!!!!!!!!
};

void stinkysFriend(StankFist &sfo)//!!!!!!!!!!
{
     sfo.stinkyVar = 99;
     cout << sfo.stinkyVar << endl;
}
int main()
{
    StankFist bob;
    stinkysFriend(bob);
    return 0;
}
