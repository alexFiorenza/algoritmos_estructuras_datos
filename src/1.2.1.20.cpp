// Lección 1
// 1.2.1.20. Cantidades, promedios y porcentajes

#include <iostream>
using namespace std;
int main()
{
    double positives = 0, negatives = 0, even_percentage = 0, quantity = 0;
    int v, positives_mean = 0;
    cout << "Ingrese valores númericos: " << endl;
    cin >> v;
    while (v != 0)
    {
        quantity++;
        if (v > 0)
        {
            positives++;
            positives_mean += v;
        }
        else
        {
            negatives++;
        }
        if (v % 2 == 0)
        {
            even_percentage++;
        }
        cin >> v;
    }
    cout << "La cantidad de positivos ha sido: " << positives << endl;
    cout << "La cantidad de negativos ha sido: " << negatives << endl;
    cout << "El porcentaje de pares a sido: " << (even_percentage * 100) / quantity << " %" << endl;
    cout << "El promedio de positivos fue: " << positives_mean / positives << endl;
    cout << "El porcentaje de negativos fue: " << (negatives * 100) / quantity << " %" << endl;
    return 0;
}