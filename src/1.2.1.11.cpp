// Lección 1
// 1.2.1.11. Cuántos días tiene un mes
// Lección 2
// 1.3.1.2. Función esPrimo
// Este ejercicio vale para la Lección 1 ejercicio 11 y Lección 2 ejercicio 3
#include <iostream>
using namespace std;
bool isLeap(int y)
{
    if ((y % 4 == 0 || y % 400 == 0) && y % 100 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
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
    cout << "El mes " << month << " tiene " << CalculateDays(month, isLeap(year)) << endl;
    return 0;
}
