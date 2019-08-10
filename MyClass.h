#ifndef MYCLASS_H
#define MYCLASS_H


class MyClass
{
    public:
        int number;
        MyClass();
        MyClass(int a);
        MyClass operator+(MyClass);
};

#endif // MYCLASS_H
