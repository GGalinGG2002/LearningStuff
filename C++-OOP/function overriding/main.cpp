#include <iostream>
using namespace std;
class Forme_Geometrice
{
public:
    int inaltime,lungime,latime;
    void getData(int z)
    {
        lungime=z;
    }
    int makeArea()
    {
        return (lungime*lungime);
    }
};
class Dreptunghi : public Forme_Geometrice
{
public:
    void getData(int x,int y)
    {
        lungime=x;
        latime=y;
    }
    int makeArea()
    {
        return (lungime*latime);
    }
    int makeArea1()
    {
        return Forme_Geometrice :: makeArea();
    }
};
class Romb : public Forme_Geometrice
{
public:
    void getData(int x,int y)
    {
        inaltime=x;
        lungime=y;
    }
    int makeArea()
    {
        return (lungime*inaltime);
    }
    int makeArea1()
    {
        return Forme_Geometrice :: makeArea();
    }
};
int main()
{
    Forme_Geometrice patrat;
    Dreptunghi d;
    Romb r;
    patrat.getData(5);
    d.getData(5,6);
    r.getData(2,8);
    cout<<patrat.makeArea()<<endl;
    cout<<d.makeArea1()<<endl;
    cout<<r.makeArea1()<<endl;
    return 0;
}
