// Повторение, управляемое счетчиком, со структурой for

#include <iostream>
using namespace std;

int main()

{
    // Задание начального значения, условие повторения и
    // приращение - все это включено в заголовок структуры for
    for (int counter = 1; counter <= 10; counter++)
    cout << counter << endl;
    return 0;       // Успешное окончание
}