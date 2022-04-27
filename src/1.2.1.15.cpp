// Lección 1
// 1.2.1.15. Números primos
// Ejemplo hecho por el Profesor Pablo Sznajdleder
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Ingrese un valor entero: " << endl;
    cin >> a;
    int evaluate = 1;
    int counter = 0;
    while (counter < a)
    {
        bool prime = true;
        int i = 2;
        while (i < evaluate && prime == true)
        {
            if (evaluate % i == 0)
            {
                prime = false;
            }
            i++;
        }
        if (prime == true)
        {
            cout << evaluate << endl;
            counter++;
        }
        evaluate++;
    }
    return 0;
}
