#include <iostream>
using namespace std;
template <typename T,typename U>
class weight
{
private:
    T kg;
    U grams;
public:
    void setData(T x,U y)
    {
        kg=x;
        grams=y;
    }
    T getKgData()
    {
        return kg;
    }
    U getGramData()
    {
        return grams;
    }
};
int main()
{
    weight <int,double>obj1;
    obj1.setData(5,0.56);
    cout<<"Value of Kg is:"<<obj1.getKgData()<<endl;
    cout<<"Value of Gram is:"<<obj1.getGramData()<<endl;
    weight <double,float>obj2;
    obj2.setData(5.61,5.5);
    cout<<"Value of Kg is:"<<obj2.getKgData()<<endl;
    cout<<"Value of Gram is:"<<obj2.getGramData()<<endl;
    return 0;
}
