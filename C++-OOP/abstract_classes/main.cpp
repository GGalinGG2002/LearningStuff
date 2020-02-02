#include <iostream>
using namespace std;
class shape
{
public:
    virtual void getArea()=0;

};
class circle : public shape
{
public:
    void getArea()
    {
        cout<<"Enter circle radius"<<endl;
        int r;
        cin>>r;
        cout<<"Area of circle is:"<<(3.14*r*r);
    }
};
class rectangle : public shape
{
public:
    void getArea()
    {
        cout<<"Enter lenght and breadth to calculate area of rectangle"<<endl;
        int l,b;
        cin>>l>>b;
        cout<<"Area of rectangle is:"<<(l*b);
    }
};
int main()
{
    circle c1;
    //c1.getArea();
    rectangle r1;
    r1.getArea();
    return 0;
}
