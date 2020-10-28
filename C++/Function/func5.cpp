#include <iostream>
using namespace std;

void SayHello();

int main ()
{
    SayHello();
    return 0;
}

void SayHello()
{
    cout << "Hello World" << endl;
}

/* Если вы делегируете задачу вывода фразы "Hello World" функции, которая вы
полняет только вывод этой строки и ничего больше не делает, то ей не нужны никакие
параметры; она не должна также возвращать никакие значения (вы не ожидаете от
такой функции никакой полезной информации). Одна из таких функций представлена
в листинге.
Прототип функции в строке 4 объявляет функцию SayHelloс возвращаемым значением 
типа void, т.е. не возвращающим никакого значения. Поэтому в определении
функции (строки 12-15) нет никакого оператора возврата. Вызов этой функции в строке 
8 функции main() не присваивает никакой переменной возвращаемого значения и
не использует его ни в каком выражении, поскольку данная функция ничего не возвращает. 
Некоторые программисты предпочитают вставлять пустой оператор return в конце таких функций:

void SayHello()
{
cout « "Hello World" « endl;
return;     // Пустой возврат
}

*/