// Lección 2
// 1.3.1.4. Unificar los atributos de una fecha

#include <iostream>
using namespace std;
int mergeDates(int year, int month, int day)
{
    string aux_year = to_string(year);
    string aux_month = month < 10 ? "0" + to_string(month) : to_string(month);
    string aux_day = day < 10 ? "0" + to_string(day) : to_string(day);
    return stoi(aux_year + aux_month + aux_day);
}
int main()
{
    cout << "Hello, World!" << endl;
    int n1, n2, n3;
    cout << "Ingrese una terna de numeros: " << endl;
    cin >> n1 >> n2 >> n3;
    if (n1 >= 1000 && n2 >= 01 && n2 <= 12 && n3 >= 0 && n3 <= 31)
    {
        cout << mergeDates(n1, n2, n3) << endl;
    }
    else
    {
        cout << "La terna de numeros ingresados es invalido" << endl;
    }
    return 0;
}