// Lección 1
// 1.2.1.6. Mayor, medio y menor valor entre tres números
// Codigo hecho por el profesor
#include <iostream>
using namespace std;

int maximo(int a, int b)
{
    int ret = b;

    if (a > b)
    {
        ret = a;
    }

    return ret;
}

int minimo(int a, int b)
{
    int ret = b;

    if (a < b)
    {
        ret = a;
    }

    return ret;
}

// Dados 3 valores numéricos diferentes entre si, determinar cual es el menor, medio y mayor

int main()
{
    int x, y, z;

    cout << "Ingrese 3 valores: " << endl;
    cin >> x >> y >> z;

    int mayor = maximo(x, maximo(y, z));
    int menor = minimo(x, minimo(y, z));
    int medio = x + y + z - mayor - menor;

    return 0;
}