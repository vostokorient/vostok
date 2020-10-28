// Использование сiп-инструкции для считывания строки с клавиатуры.
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    char str[80];

    cout<<"Введите строку: "<<endl;
    gets (str);

    cout<<"Вот то что вы ввели: "<<endl;
    cout<<str;
    cout<<endl;
    return 0;
}

/* Вот возможный результат выполнения этой программы.

Введите строку: Это проверка
Вот ваша строка: Это проверка

 */