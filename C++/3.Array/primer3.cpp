// Вывод календаря
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, nums[5][7];

    cout<<endl;

    for(i=0; i < 5; i++)
    {
        for(j=0; j < 7; j++)
        {
            nums[i][j] = (i*7)+j+1;
            if(nums[i][j] <= 31)
            cout<<setw(4)<<nums[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}