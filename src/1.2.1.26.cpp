// Lección 1
// 1.2.1.26. Mínimo valor dentro de un intervalo
#include <iostream>
using namespace std;
int main()
{
    int a, min = -16, max = 27, last_registered = min, hasSetValue = false;
    cout << "Ingrese un conjunto de valores númericos:  " << endl;
    cin >> a;
    while (a != 0)
    {
        if ((a <= last_registered || !hasSetValue) && a <= max && a >= min)
        {
            last_registered = a;
            hasSetValue = true;
        }
        cin >> a;
    }
    if (hasSetValue)
    {
        cout << "El menor valor ingresado que cumple con el intervalo [-16,27] es: " << last_registered << endl;
    }
    else
    {
        cout << "Los conjuntos numericos que ha ingresado no cumplen la condicion" << endl;
    }
    return 0;
}
