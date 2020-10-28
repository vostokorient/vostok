#include <stdio.h>
#include <iostream>

int main(int arg, char* pszArgs[])
{
    // ввод счетчика цикла
    int loopCount;
    std::cout << "Введите loopCount: ";
    std::cin >> loopCount;
        // работаем, пока не нарушится условие
        for (int i = loopCount; i > 0; i--)
        {
        std::cout << "Осталось выполнить " << i-1 << " циклов\n";
        }
    return 0;
}