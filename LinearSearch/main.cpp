
#include <iostream>

class Derived;

class Base
{
    friend Derived;
private:
    int myPrivateValue = 1;
public:
    int myPublicValue = 3;
};

class Derived : public Base
{
    void message(Base& someClass)
    {
        someClass.myPublicValue = 10;
        this->myPrivateValue = 10;
    }
};

int main()
{
    Derived* d = new Derived();
    std::cout << d[0];
}