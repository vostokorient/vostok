
#include <iostream>
using namespace std;

int main()
{
    const int index1=10, index2=5;
    int a[index1]={1,2,3,4,5,6,7,8,9,10}, b[index2]={5,4,3,2,1};
    
    cout<<"Enter 1 index: "<<endl;
    int i=0;
    cin >> i;

    cout<<"Enter 2 index: "<<endl;
    int j=0;
    cin >> j;

    cout<<endl<<a[i]+b[j]<<endl;
    return 0;
}