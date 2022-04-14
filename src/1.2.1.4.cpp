// Lección 1
// 1.2.1.3. División entera y módulo
// 1.2.1.5. Mayor y menor valor entre dos números
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Ingrese dos valores numericos diferentes" << endl;
    cin >> a;
    cin >> b;
    if (b > a)
    {
        cout << "El valor: " << b << " es mayor que " << a << endl;
    }
    else if (b == a)
    {
        cout << "Los valores ingresados son iguales";
    }
    else
    {
        cout << "El valor: " << a << " es mayor que " << b << endl;
    }
    return 0;
}