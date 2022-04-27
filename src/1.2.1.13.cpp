// Lección 1
// 1.2.1.13. Factorial de un número
// Ejemplo hecho por el Profesor Pablo Sznajdleder
#include <iostream>
using namespace std;
int main()
{
    double a, i = 2, f = 1;
    cout << "Ingrese un valor entero: " << endl;
    cin >> a;
    while (i <= a)
    {
        f = f * i;
        i++;
    }
    cout << f << endl;
    return 0;
}
