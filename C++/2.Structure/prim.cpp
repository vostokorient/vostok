#include <iostream>
using namespace std;

int main()
{
    int x, j;

    for(x=5; x>0; x--)
    {
        for(j=5; j>0; j--)
        {
            if(j<x) cout<<"1 ";
            else cout<<"  ";
        }
        cout<<'*'<<endl;
    }
    return 0;
}
