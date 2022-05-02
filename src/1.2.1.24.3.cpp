// Lección 1
// 1.2.1.23. Máximos
// 3. Dados 100 valores enteros, informar cuál es el menor.
#include <iostream>
using namespace std;
int main()
{
    int a, min, index = 0;
    cin >> a;
    cout << "Ingrese 100 valores enteros: " << endl;
    while (index < 100)
    {
        if (a < min)
        {
            min = a;
        }
        index++;
        cin >> a;
    }
    cout << "El mayor de los enteros ingresados es: " << min << endl;
    return 0;
}