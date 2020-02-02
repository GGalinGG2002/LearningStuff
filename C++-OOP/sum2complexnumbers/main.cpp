#include <iostream>
using namespace std;
class numbers
{
    private:
        int real;
        int imaginary;
    public:
        numbers()
        {
        }
        numbers(int r,int i)
        {
            real=r;
            imaginary=i;
        }
        void displayData()
        {
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
        int getrealtype()
        {
            return real;
        }
        int getimaginarytype()
        {
            return imaginary;
        }
};
numbers sum2nr(numbers nr1,numbers nr2)
{
    int r,i;
    r=nr1.getrealtype()+nr2.getrealtype();
    i=nr1.getimaginarytype()+nr2.getimaginarytype();
    numbers temp(r,i);
    return temp;
}
int main()
{
    numbers nr1(5,15),nr2(10,2),nr3;
    nr1.displayData();
    nr2.displayData();
    nr3=sum2nr(nr1,nr2);
    nr3.displayData();
    numbers *numar;
    numar=&nr2;
    numar->displayData();
    numar=&nr1;
    numar->displayData();
    return 0;
}
