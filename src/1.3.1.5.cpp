// Lección 2
// 1.3.1.5. Separar los atributos de una fecha

#include <iostream>
using namespace std;
void divideDate(int date, int &a, int &m, int &d)
{
    a = date / 10000;
    d = date % 100;
    m = ((date - d) % 10000) / 100;
}
int main()
{
    cout << "Ingrese una fecha en formato aaaammdd" << endl;
    int date, a, m, d;
    cin >> date;
    divideDate(date, a, m, d);
    cout << "El año ingresado es: " << a << endl;
    cout << "El mes ingresado es: " << m << endl;
    cout << "El dia ingresado es: " << d << endl;
    return 0;
}
