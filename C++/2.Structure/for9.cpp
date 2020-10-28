#include <iostream>
using namespace std;

int main()
{
    int x, j;

    for(x=0; x<10; x++)
    {
        for(j=10; j>0; j--)
        {
            if(j>x) cout<<"* ";
            else cout<<"1 ";
        }
        cout<<endl;
    }
    return 0;
}
