// Вывод таблицы умножения
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, nums[11][11];

    cout<<endl;

    for(i=1; i < 11; i++)
    {
        for(j=1; j < 11; j++)
        {
            nums[i][j] = i*j;
            cout<<setw(5)<<nums[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}