#include <iostream>
using namespace std;

int max(int, int, int);             // Прототип функции

int main()
{
    int a, b, c;
    cout << "Enter the numbers: " << endl;
    cin >> a >> b >> c;
    
    cout << endl << "MAX is: " << max(a, b, c) << endl;

    return 0;
}

// Определение функции max
int max (int a, int b, int c)
{
    int max = a;
    if(b > max)
    max = b;
    if(c > max)
    max = c;

    return max;
}