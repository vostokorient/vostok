// Сумма нечетных чисел от 1 до 99
#include <iostream>
using namespace std;

int main() {
    
    int n=99, i=1, sum=0;
    while(i<=n) {
    sum+=i;
    i=i+2;
    }
    cout<<"Sum of natural numbers is: "<<sum<<"\n";
    return 0;
}