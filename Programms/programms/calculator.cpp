//CALCULATOR (SIMPLE)
#include <iostream>
using namespace std;

int main() {

    char ch;
    double a,b,c;

    cout<<endl<<"Enter the something: "<<endl<<endl;
    cin>>a>>ch>>b;
    
    if(ch=='+') c=a+b;
    if(ch=='-') c=a-b;
    if(ch=='*') c=a*b;
    if(ch=='/') c=a/b;
    cout<<endl<<c<<endl; 
    return 0;
   }