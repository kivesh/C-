#include <iostream>
#include <string>

using namespace std;

class VariableClass{

    public:
        void setName(string x)
        {
            name = x;
        }

        string getName()
        {
            return name;
        }
    private:
       string name;
};
int main()
{
    VariableClass student;
    student.setName("Kivesh");
    cout << student.getName();
    return 0;
}
