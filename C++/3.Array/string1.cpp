
#include <iostream>
using namespace std;

int main()
{
    char str1[6] = "Hello";
    char str2[6] = {'H','e','l','l','o','\0'};
    char e1[] = "www.osborn.com";
    char e2[] = "www.weather.com";
    char e3[] = "www.amazon.com";

    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<e1<<"     "<<e2<<"     "<<e3<<endl;
    return 0;
}