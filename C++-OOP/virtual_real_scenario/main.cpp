#include <iostream>
using namespace std;
class animal{
public:
    virtual void eat()
    {
        cout<<"i am eating generic food"<<endl;
    }
};
class cat : public animal
{
public:
    void eat()
    {
        cout<<"i am eating cat food"<<endl;
    }
};
class dog : public animal
{
public:
    void eat()
    {
        cout<<"i am eating dog food"<<endl;
    }
};
void function1(animal *xyz)
{
    xyz->eat();
}
int main()
{
    animal *ptr;
    cat cat1;
    dog dog1;
    ptr=&cat1;
    function1(ptr);
    ptr=&dog1;
    function1(ptr);
    return 0;
}
