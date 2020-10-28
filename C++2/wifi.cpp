#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int pasw, x, n, m=10;
    
    cout<<"Введите пароль: "<<endl;
    cin>>pasw;
    cout<<"Введите разрядность: "<<endl;
    cin>>n;

    for(x=pow(m,n); x>0; x--)
    {
        cout<<x<<endl;
        if(x==pasw) 
        {
            cout<<endl<<"Success PASSWORD is: "<<x<<endl<<endl;
            break;
        }
    }
    return 0;
}