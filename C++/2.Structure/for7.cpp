/* в С++ разрешается опустить любой элемент заголовка цикла (инициализа­
ция, условное выражение, инкремент) или даже все сразу. Например, мы хотим
написать ЦИIUI, который должен выполняться до тех пор, пока с клавиатуры не
будет введено число123. Вот как выглядит такая программа. */
// Цикл for без инкремента в заголовке.

#include <iostream>
using namespace std;

int main ()
{
    int x;
    for(x=0; x!=123;)
    {
        cout<<"Введите число: ";
        cin>>x;
    }
    return 0;
}