#include <iostream>
using namespace std;
class weight
{
private:
    int kg;
public:
    weight()
    {
        kg=0;
    }
    weight(int x)
    {
        kg=x;
    }
    void printWeight()
    {
        cout<<"Weight in Kg:"<<kg<<endl;
    }
    /*void operator ++()
    {
        ++kg;
    }*/
    void operator ++(int)
    {
        kg++;
    }
    void operator --()
    {
        --kg;
    }
    void operator --(int)
    {
        kg--;
    }
    weight operator ++()
    {
        weight temp;
        temp.kg=++kg;
        return temp;
    }
};
int main()
{
    weight v;
    v.printWeight();
    ++v;
    v.printWeight();
    v++;
    v.operator ++();
    v.printWeight();
    --v;
    v.printWeight();
    v--;
    v.printWeight();
    weight obj1(7),obj2;
    obj2=++obj1;
    obj2.printWeight();
    return 0;
}
