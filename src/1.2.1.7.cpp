//  Lección 1
// 1.2.1.7. Tipo de triángulo según sus lados
#include <iostream>
using namespace std;
string triangleType(double a, double b, double c)
{
    if (a == b && a == c)
    {
        return "equilatero";
    }
    else if (a != b && a != c)
    {
        return "escaleno";
    }
    else
    {
        return "isosceles";
    }
}
int main()
{
    double a, b, c;
    cout << "Escriba los lados de su triangulo: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "Usted a ingresado un triangulo " << triangleType(a, b, c) << endl;
    return 0;
}
