// rand() с загаловкой <cstdlib> Генерирует случайное число
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    label:
    int r;
    r=rand();
    cout<<r<<endl;
    goto label;
    return 0;
}