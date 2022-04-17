// Lección 1
// 1.2.1.10. Fecha más próxima
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <ctime>
using namespace std;

int main()
{
    int a, b;
    cout << "Escriba dos fechas en format aaaammdd: " << endl;
    cin >> a >> b;
    if (a < b)
    {
        a >= 20220000 || b >= 20220000 ? cout << "La primera fecha es la mas actual: " << a << endl : cout << "La segunda fecha es la mas actual: " << b << endl;
    }
    else
    {
        a >= 20220000 || b >= 20220000 ? cout << "La segunda fecha es la mas actual: " << b << endl : cout << "La primera fecha es la mas actual: " << a << endl;
    }
    return 0;
}
