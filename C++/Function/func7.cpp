#include <iostream>
using namespace std;

void repchar(char, int);                    // объявление функции

int main()
{
    char chin;
    int nin;

    cout << "Введите символ: ";
    cin >> chin;

    cout << "Введите число повторений символа: ";
    cin >> nin;

    repchar(chin, nin);

    return 0;
}
// --------------------------------------------------------
// определение функции repchar()
void repchar(char ch, int n)                // заголовок функции
{
    for(int j=0; j<n; j++)                  // тело функции
    cout << ch;
    cout << endl;
}