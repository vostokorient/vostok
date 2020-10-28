/* Программа выводить числа наоборот.
Пример: при вводе числа 12345 программы выведет как 54321 */
#include <iostream>
using namespace std;

int main() {

    int a;
    
    cout<<"Enter the number: "<<endl;
    cin>>a;
    
    while(a>0) {
        cout<<a%10;
        a/=10;
        }
    return 0;
}