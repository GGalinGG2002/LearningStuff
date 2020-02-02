#include <iostream>
using namespace std;
class Complex
{
  private:
      int real,imaginary;
  public:
    Complex(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    void print()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    Complex()
    {
        real=0;
        imaginary=0;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imaginary=imaginary+c.imaginary;
        return temp;
    }
    Complex operator -(Complex c)
    {
        Complex temp;
        temp.real=real-c.real;
        temp.imaginary=imaginary-c.imaginary;
        return temp;
    }
};
int main()
{
    Complex c1(5,4);
    Complex c2(2,2);
    Complex c3;
    c3=c1+c2+c1;//c3=c1.add(c2);
    c3.print();
    c2.print();
    c3=c1-c2;
    c3.print();
    return 0;
}
