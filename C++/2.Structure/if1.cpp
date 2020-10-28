#include <iostream>
using namespace std;

int main()

{
    int num;
    
    //Определение числа на четность или нечетность
    cout << "Enter the number: \n";
    cin >> num;
            if (( num % 2 ) > 0 )
            cout << "Это число нечетное \n";
            else 
            cout << "Это число четное \n";
        return 0;
}