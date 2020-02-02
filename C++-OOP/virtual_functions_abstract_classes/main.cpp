#include <iostream>
using namespace std;
class mybase
{
public:
    void show()
    {
        cout<<"Base class show function called"<<endl;
    }
    virtual void print()
    {
        cout<<"Base class print function called"<<endl;
    }
};
class myderived : public mybase
{
public:
    void show()
    {
        cout<<"Derived class show function called"<<endl;
    }
    void print()
    {
        cout<<"Derived class print function called"<<endl;
    }
};
int main()
{
    mybase *ptr;
    myderived derivedobj;
    ptr=&derivedobj;
    ptr->print();
    ptr->show();
    return 0;
}
