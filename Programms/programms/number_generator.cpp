#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
int myh, mym, mys, camh, camm, cams;
cout<<"Enter your hour: ";
cin>>myh;
cout<<"Enter your min: ";
cin>>mym;
cout<<"Enter your mys";
cin>>mys;
cout<<(myh*3600)+(mym*60)*mys<<endl;
return 0;
}