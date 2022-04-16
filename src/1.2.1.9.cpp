// Lección 1
// 1.2.1.9. Unificar los atributos de una fecha
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "Ingrese una terna de numeros: " << endl;
    cin >> n1 >> n2 >> n3;
    if (n1 >= 1000 && n2 >= 01 && n2 <= 12 && n3 >= 0 && n3 <= 31)
    {
        string aux_year = to_string(n1);
        string aux_month = n2 < 10 ? "0" + to_string(n2) : to_string(n2);
        string aux_day = n3 < 10 ? "0" + to_string(n3) : to_string(n3);
        cout << aux_year << aux_month << aux_day << endl;
    }
    else
    {
        cout << "La terna de numeros ingresados es invalido" << endl;
    }
    return 0;
}
