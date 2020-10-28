#include <iostream>
using namespace std;
int main()
{
 char ch;
    cout << "Вводите символы, для окончания ввода введите х. \n";
    do {
        cout << ":";
        cin >> ch;
     } while (ch !='x');
    return 0;
}