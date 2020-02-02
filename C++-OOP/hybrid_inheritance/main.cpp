#include <iostream>
using namespace std;
class base
{
protected:
    int val;
};
class derived1 : virtual public base
{
public:
      derived1()
      {
          val=1;
      }
      int sendvalue()
      {
          return val;
      }
};
class derived2: virtual public base
{
public:
      derived2()
      {
        val=2;
      }
      int sendvalue()
      {
          return val;
      }
};
//class derived3:public derived1,public derived2
class derived3:public derived2,public derived1
{
public:
    void getValue()
    {
        cout<<"Sum of derived classes is:"<<derived1::val+derived2::val<<endl;
        cout<<"Value of val is:"<<derived1::sendvalue();
    }
};
int main()
{
    derived3 x;
    x.getValue();
    return 0;
}
