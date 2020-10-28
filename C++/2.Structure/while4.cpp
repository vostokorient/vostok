/* Это программв выводит все печатаемые символы, 
   включая расширенный набор символов, если
   таковой сушествует. */

#include <iostream>
using namespace std;

int main ()
{
    unsigned char ch;
    ch = 32;
    while(ch) 
    {
        cout<<ch;
        ch++;
    }
    return 0;
}