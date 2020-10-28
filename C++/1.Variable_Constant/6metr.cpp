#include <iostream>
using namespace std;

int main()
{
    float a;
    cout << "ВВедите футы: ";
    do
    {
        cin >> a; 
        cout << a*0.3048 << " метров \n" << "ВВедите футы: ";
    } while (a !='x');
    return 0;
}