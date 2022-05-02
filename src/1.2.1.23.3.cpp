// Lección 1
// 1.2.1.23. Máximos
// 3. Dados 100 valores enteros, informar cuál es el mayor.
#include <iostream>
using namespace std;
int main()
{
    int a, max, index = 0;
    cin >> a;
    cout << "Ingrese 100 valores enteros: " << endl;
    while (index < 100)
    {
        if (a > max)
        {
            max = a;
        }
        index++;
        cin >> a;
    }
    cout << "El mayor de los enteros ingresados es: " << max << endl;
    return 0;
}