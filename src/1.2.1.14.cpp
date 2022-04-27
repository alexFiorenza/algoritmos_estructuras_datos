// Lección 1
// 1.2.1.14. Números primos
// Va a buscar divisores del número hasta encontrar uno si ese divisor es igual al numero entonces es primo caso contrario no
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, divider = 2;
    cout << "Introduzca un numero entero: " << endl;
    cin >> n;
    if (n == 1)
        cout << "El numero: " << n << " es primo" << endl;
    while (n % divider != 0)
    {
        divider++;
    }
    if (n == divider)
    {
        cout << "El numero: " << n << " es primo" << endl;
    }
    else
    {
        cout << "El numero: " << n << " no es primo" << endl;
    }
    return 0;
}
