#include <iostream>
#include <string>
using namespace std;

class Person{
   private:
       string name;
   public:
       Person()
       {
           name = "?";
           cout << "A person object was created." << endl;
       }

      void setName(string x)
      {
          name = x;
      }
      string getName()
      {
          return name;
      }
};
int main()
{
    Person randomPerson;
    cout << "This persons name is " << randomPerson.getName() << endl;
    return 0;
}
