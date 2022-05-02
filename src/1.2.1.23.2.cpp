// Lección 1
// 1.2.1.23. Máximos
// 2. Dados 100 valores enteros, todos mayores que -10, informar cuál es el mayor.
#include <iostream>
using namespace std;
int main()
{
    int a, negatives_max, index = 0;
    cin >> a;
    cout << "Ingrese 100 valores enteros: " << endl;
    while (index < 100)
    {
        if (a > -10)
        {
            if (a > negatives_max)
            {
                negatives_max = a;
            }
            index++;
        }
        cin >> a;
    }
    cout << "El mayor de los mayores de -10 es: " << negatives_max << endl;
    return 0;
}