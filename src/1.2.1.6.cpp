// Lección 1
// 1.2.1.6. Mayor, medio y menor valor entre tres números
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int max = 0, min = 0, half = 0;
    cout << "Ingrese 3 valores numericos enteros: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b && a > c)
    {
        max = max + a;
        if (b > c)
        {
            half = half + b;
            min = min + c;
        }
        else
        {
            half = half + c;
            min = min + b;
        }
    }
    else if (b > a && b > c)
    {
        max = max + b;
        if (a > c)
        {
            half = half + a;
            min = min + c;
        }
        else
        {
            half = half + c;
            min = min + a;
        }
    }
    else
    {
        max = max + c;
        if (b > a)
        {
            half = half + b;
            min = min + a;
        }
        else
        {
            half = half + a;
            min = min + b;
        }
    }

    cout << "El mayor es: " << max << " el del medio es: " << half << " el menor es: " << min << endl;
}
