#include <iostream>
using namespace std;
class A
{
public:
    void printmsg()
    {
        cout<<"Class A printed this msg"<<endl;
    }
};
class B
{
public:
    void printmsg()
    {
        cout<<"Class B printed this msg"<<endl;
    }
};
class AB : public A,public B
{
public:
    void printmsg()
    {
        A::printmsg();
        B::printmsg();
        cout<<"Class AB printed this msg"<<endl;
    }
};
int main()
{
    AB obj;
    obj.printmsg();
    return 0;
}
