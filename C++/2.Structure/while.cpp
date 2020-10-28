#include <stdio.h>
#include <iostream>

int main(int arg, char* pszArgs[])
{
    // ввод счетчика цикла
    int loopCount;
    std::cout << "Введите loopCount: ";
    std::cin >> loopCount;

        // теперь в цикле выводим значения
        while (loopCount < 100)
        {
        loopCount = ++loopCount;        //"loopcount + 1 == ++loopcount"
        std::cout << "Осталось выполнить: " << loopCount << " циклов\n";
        }
    return 0;
}