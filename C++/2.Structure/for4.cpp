/* Результат выполнения программы будет выглядеть как
1 4 7 10 13
2 5 8 11 14
3 6 9 12 15
Индексная переменная i внешнего оператора цикла принимает значения от
1 до 3 включительно. Эта переменная определяет номер строки, в которой
отображается число. Номер столбца определяется индексной переменной j
внутреннего оператора цикла. Эта переменная при каждом фиксированном
значении переменной i пробегает значения от 1 до 5. Во внутреннем опе-
раторе цикла выполняется всего одна команда cout<<3*(j-1)+i<<" ",
с помощью которой распечатываются числа в соответствующей строке. Что
касается внешнего оператора цикла, то в рамках каждого цикла выполня-
ется две команды: внутренний оператор цикла (распечатываются числа
в строке) и команда cout<<"\n" (для перехода к новой строке). */

#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=5;j++) cout<<3*(j-1)+i<<" ";
        cout<<"\n";}
    return 0;
}