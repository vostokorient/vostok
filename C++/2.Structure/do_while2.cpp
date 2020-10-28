// Печатаем числа от 1 до 10
// Применением структуру повторения do/while

#include <iostream>
using namespace std;

int main()

    {
        int counter=1;

        do {
            cout << counter << " ";
        } while (++counter <= 10);
        return 0;
    }