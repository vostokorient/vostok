
// Координаты брошенного под углом тела

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    const double pi=3.14;
    const double g=9.81;
    double x, y, t, alpha, v, T;    //х, у координаты, alpha угол брошенного тела
                                    // v нач. скорость, Т время полета тела до падения
    cout<<"Введите нач. скорость: "<<endl;
    cin>>v;
    cout<<"Введите угол:          "<<endl;
    cin>>alpha;

    alpha=alpha*pi/180;
    T=2*v*sin(alpha)/g;

    cout<<endl<<endl<<setw(3)<<"T"<<setw(15)<<"x"<<setw(15)<<"y"<<setw(15)<<"t"<<endl<<endl;

    for(t=0.0; t<=T; t+=0.05) {
        x=(v*t*cos(alpha));
        y=(v*t*sin(alpha))-((g*t*t)/2);
        cout<<setiosflags (ios::fixed | ios::showpoint)<<setw(3)<<setprecision(3)<<T
        <<setw(15)<<setprecision(3)<<x<<setw(15)<<y<<setw(15)<<t<<endl; }
    return 0;
}