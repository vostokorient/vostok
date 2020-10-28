#include <iostream>
using namespace std;

int main()
{
    int a=8, c=9, e;
    int* b=&a;
    int *d;
    d=&c;
    e=*b;
    cout<<b<<"     "<<*d<<"     "<<e<<endl;
    return 0;
}