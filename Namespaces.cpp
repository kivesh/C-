#include <iostream>

using namespace std;


namespace love
{
   void print()
   {
        cout << "I love u!" << endl;
   }
}

namespace hate
{
   void print()
   {
        cout << "I hate u!" << endl;
   }

   int num = 10;
}

namespace in
{
    class A
    {

    public :
       void print();
    };
}

void in::A::print()
{
    cout << "A" << endl;
}


namespace out
{
    class B;
}

class out::B
{

public:
    void print(){cout << "B" << endl;}
};
int main()
{
    love::print();
    using namespace hate;
    print();
    num = 0;
    cout << num << endl;

    in::A obj;
    obj.print();

    out::B obj2;
    obj2.print();
    return 0;
}
