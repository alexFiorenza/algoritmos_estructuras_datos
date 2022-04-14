// Lección 1
// 1.2.1.1. Operaciones aritméticas
// 1.2.1.2. Cociente entre dos números
#include <iostream>
#include <string>
using namespace std;
void Operate(int a, int b)
{
    int sum = a + b;
    int less = a - b;
    int product = a * b;
    int division = a / b;
    cout << "La suma entre los numeros es:" << sum << endl;
    cout << "La resta entre los numeros es:" << less << endl;
    cout << "El producto entre los numeros es:" << product << endl;
    cout << "La division entre los numeros es:" << division << endl;
}
int main()
{
    int a, b;
    cout << "Ingrese dos numero enteros" << endl;
    cin >> a >> b;
    if (b > 0)
        Operate(a, b);
    return 0
}
