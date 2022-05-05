// Lección 3
// 1.4.1.2. TAD Fecha
#include <iostream>
#include "../lib/date.hpp"
using namespace std;
int main()
{
    Date myDate = datePrompt();
    cout << "La fecha ingresada ha sido: " << endl;
    cout << dateToString(myDate) << endl;
    cout << "El dia de hoy es: " << endl;
    cout << dateToString(dateGetToday()) << endl;
    return 0;
}