#include <iostream>
using namespace std;
template <typename T,typename U>
U add(T x, U y)
{
    return (x+y);
}
int main()
{
    cout<<add<int,double>(5,3.51)<<endl;
    //cout<<add<float>(5.2,5.5);
    return 0;
}
