// Lección 1
// 1.2.1.23. Máximos
// 1. Dados 100 valores enteros positivos, informar cuál es el mayor.

#include <iostream>
using namespace std;
int main()
{
    int a, max, index = 0;
    cin >> a;
    cout << "Ingrese 100 valores enteros: " << endl;
    while (index < 100)
    {
        if (a > 0)
        {
            if (a > max || (max == 0 && index == 0))
            {
                max = a;
            }
            index++;
        }
        cin >> a;
    }
    cout << "El mayor es: " << max << endl;
    return 0;
}