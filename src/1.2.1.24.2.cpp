// Lección 1
// 1.2.1.23. Máximos
// 2. Dados 100 valores enteros menores que 10, informar cuál es el menor.
#include <iostream>
using namespace std;
int main()
{
    int a, negatives_min, index = 0;
    cin >> a;
    cout << "Ingrese 100 valores enteros: " << endl;
    while (index < 100)
    {
        if (a < -10)
        {
            if (a < negatives_min || (negatives_min == 0 && index == 0))
            {
                negatives_min = a;
            }
            index++;
        }
        cin >> a;
    }
    cout << "El menor de los mayores de -10 es: " << negatives_min << endl;
    return 0;
}