#include <iostream>

void printO()
{
    std::cout << "O" << std::endl;
}

void printK()
{
    std::cout << "K" << std::endl;
}

// Функция printOK() вызывает как printO(), так и printK()
void printOK()
{
    printO();
    printK();
}

// Объявление main()
int main()
{
    std::cout << "Starting main()" << std::endl;
    printOK();
    std::cout << "Ending main()" << std::endl;
    return 0;
}

/* Также main() не является единственной функцией, которая может
вызывать другие функции. Любая функция может вызывать любую
другую функцию!

Результат выполнения программы выше:

Starting main()
O
K
Ending main()

*/