// Lección 1
// 1.2.1.21. Mayores y menores que

#include <iostream>
using namespace std;
int main()
{
    double mean = 0, negatives_sum = 0, quantity = 0;
    int a;
    cout << "Introduzca 50 valores númericos: " << endl;
    cin >> a;
    while (quantity < 50)
    {
        if (a < -10)
        {
            negatives_sum += a;
        }
        else if (a > 100)
        {
            mean += a;
            quantity++;
        }
        cin >> a;
    }
    cout << "El promedio de los mayores de 100 es: " << mean / quantity << endl;
    cout << "La suma de los menores de -10 es: " << negatives_sum << endl;
    return 0;
}
