/* в следующей программе показано использование всех четырех строковых
функций. strcpy(), strcat(), strcmp(), strlen(). */

// Демонстрация использования строковых функций
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int rnain ()
{
    char s1[80], s2[80];

    strcpy(s1, "С++");
    strcpy(s2, " - это мощный язык/");

    cout<<"Длины строк: "<<strlen(s1);
    cout<<' '<<strlen(s2)<<"\n";

    if(!strcmp(s1, s2))
    cout<<"Эти строки равны. \n";
    else cout<<"Эти строки не равны. \n";

    strcat(s1, s2);
    cout<<s1<<'\n';

    strcpy(s2, s1);
    cout<<s1<<" и "<<s2<<"\n";

    if(!strcmp(s1, s2))
    cout<<"Строки s1 и s2 теперь одинаковы. \n";

    return 0;
}

/* Вот как выглядит результат выполнения этой программы.

Длины строк: 3 19
Эти строки не равны.
С++ - это мощный язык.
С++ - это мощный язык. и С++ - это мощный язык.
Строки s1 и s2 теперь одинаковы.

*/