// Lección 2
// 1.3.1.2. Función esPrimo
#include <iostream>
using namespace std;
bool esPrimo(int n)
{
    int i = 2;
    bool isPrime = true;
    while (i < n && isPrime == true)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
        i++;
    }
    return isPrime;
}
int main()
{
    int a;
    cout << "Ingrese un valor entero: " << endl;
    cin >> a;
    int evaluate = 1;
    int counter = 0;
    while (counter < a)
    {
        if (esPrimo(evaluate))
        {
            cout << evaluate << endl;
            counter++;
        }
        evaluate++;
    }
    return 0;
}
