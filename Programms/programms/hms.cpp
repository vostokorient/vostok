// Вычисление разницу по времени камер
#include <iostream>

using namespace std;

int main(){
    
    int t, t1, t2;
    double h1, m1, s1, h2, m2, s2;

    cout<<endl<<"Enter the time 1 camera (hour): ";
    cin>>h1;
    cout<<"Enter the time 1 camera (min) : ";
    cin>>m1;
    cout<<"Enter the time 1 camera (sec) : ";
    cin>>s1;
    cout<<endl<<"Enter the time 2 camera (hour): ";
    cin>>h2;
    cout<<"Enter the time 2 camera (min) : ";
    cin>>m2;
    cout<<"Enter the time 2 camera (sec) : ";
    cin>>s2;
    t1=(h1*3600)+(m1*60)+s1;
    t2=(h2*3600)+(m2*60)+s2;
    t=t1-t2;
    cout<<endl
    <<"Time of 1 camera     "<<(t1/3600)<<":"<<(t1%3600)/60<<":"<<(t1%3600)%60<<endl
    <<"Time of 2 camera     "<<(t2/3600)<<":"<<(t2%3600)/60<<":"<<(t2%3600)%60<<endl<<endl
    <<"Diference of cameras "<<(t/3600)<<":"<<(t%3600)/60<<":"<<(t%3600)%60<<endl<<endl;
    return 0;
}