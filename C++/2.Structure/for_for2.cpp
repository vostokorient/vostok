// Печатает квадрат по заданному числу
#include <iostream>
using namespace std;
int main(){
    int i,j,a;

    cout<<"Enter the number: "<<endl;
    cin>>a;
    
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++) cout<<'*'<<" ";
        cout<<"\n";}
    return 0;
}