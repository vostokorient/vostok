#include <iostream>
using namespace std;

int main()
{
    long TotalSec = time(0);
    long currentSec = TotalSec % 60;

    long TotalMin = TotalSec / 60;
    long currentMin=TotalMin % 60;

    long TotalHour = TotalMin / 60;
    long currentHour = TotalHour % 24;

    cout << endl << currentHour << " : " << currentMin << " : " << currentSec << endl;
    
    return 0;
}