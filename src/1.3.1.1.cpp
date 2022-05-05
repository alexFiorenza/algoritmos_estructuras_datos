// Lección 2
// 1.3.1.1. Función factorial
#include <iostream>
using namespace std;
double factorial(int n)
{
    double i = 2, f = 1;
    while (i <= n)
    {
        f = f * i;
        i++;
    }
    return f;
}
int main()
{
    int n;
    cout << "Ingrese un valor entero: " << endl;
    cin >> n;
    int factorial_result = factorial(n);
    cout << "El factorial de " << n << " es " << factorial_result << endl;
    return 0;
}