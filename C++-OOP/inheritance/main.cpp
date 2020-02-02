//https://www.youtube.com/watch?v=Zd_4xa071nc&list=PLIY8eNdw5tW_o8gsLqNBu8gmScCAqKm2Q&index=39
#include <iostream>
using namespace std;
//prima clasa
class Shape
{
protected:
    int width;
    int lenght;
    int height;
public:
    void setWidth(int w)
    {
        width=w;
    }
    void setLenght(int l)
    {
        lenght=l;
    }
    void setHeight(int x)
    {
        height=x;
    }
};
//clasa derivata  ce mosteneste atributele primei clase
class Rectangle: public Shape
{
public:
    int getArea()
    {
        return (width*lenght);
    }
};
class Square: public Shape
{
public:
    int getArea()
    {
        return (height*lenght);
    }
};
int main()
{
    Rectangle dreptunghi;
    dreptunghi.setWidth(5);
    dreptunghi.setLenght(7);
    dreptunghi.setHeight(15);
    Square patrat;
    patrat.setWidth(10);
    patrat.setHeight(3);
    patrat.setLenght(12);
    cout<<"Aria dreptunghiului este:"<<dreptunghi.getArea()<<endl<<"Aria patratului este:"<<patrat.getArea()<<endl;
    return 0;
}
