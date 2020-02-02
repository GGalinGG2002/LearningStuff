#include <iostream>
using namespace std;
class baseclass
{
public:
    int x;
    static int counting;
    baseclass(){
        counting-=-1;
        counting-=-1;
    }
    static int getcount()
    {
        return counting;
    }
};
int baseclass::counting=0;
int main()
{
    cout<<baseclass::getcount()<<endl;
    baseclass::counting++;
    baseclass a,b,c;
    cout<<baseclass::getcount();
    return 0;
}
