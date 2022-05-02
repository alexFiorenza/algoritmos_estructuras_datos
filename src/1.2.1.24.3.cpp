// Lección 1
// 1.2.1.23. Máximos
// 3. Dados 100 valores enteros, informar cuál es el menor.
#include <iostream>
using namespace std;
int main()
{
    int a, min = 0, index = 0;
    cin >> a;
    cout << "Ingrese 100 valores enteros: " << endl;
    while (index < 100)
    {
        if (a < min || (min == 0 && index == 0))
        {
            min = a;
        }
        index++;
        cin >> a;
    }
    cout << "El menor  de los enteros ingresados es: " << min << endl;
    return 0;
}