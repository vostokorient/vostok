#include <iostream>
using namespace std;

int main()
{
    int a,*b,*c,d,e,f;
    a=9;
    d=89;

    *b=a;
    c=&d;

    e=*b;
    f=*c;

    cout<<a<<"     "<<b<<"     "<<c<<"     "<<d<<endl;
    cout<<e<<"     "<<f<<endl;

    *c=21;
    cout<<c<<"     "<<d<<endl;
    
    return 0;
}