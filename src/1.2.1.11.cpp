// Lección 1
// 1.2.1.11. Cuántos días tiene un mes
#include <iostream>
using namespace std;
int CalculateDays(int month, bool isLeap)
{
    if ((month % 2 != 0 && month <= 7) || (month % 2 == 0 && month > 7))
    {
        return 31;
    }
    else
    {
        if (month == 2)
        {
            return isLeap ? 29 : 28;
        }
        return 30;
    }
}
int main()
{
    int month, year;
    cout << "Introduzca un  año y un mes" << endl;
    cin >> year >> month;
    if ((year % 4 == 0 || year % 400 == 0) && year % 100 != 0)
    {
        cout << "El mes " << month << " tiene " << CalculateDays(month, true) << endl;
    }
    else
    {
        cout << "El mes " << month << " tiene " << CalculateDays(month, false) << endl;
    }
    return 0;
}
