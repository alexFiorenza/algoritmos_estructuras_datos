// Lección 1
// 1.2.1.25. Mayor de los negativos, menor de los positivos
#include <iostream>
using namespace std;
int main()
{
    int a, max_negative = 0, min_positive = 0;
    cout << "Ingrese valores númericos: " << endl;
    cin >> a;
    while (a != 0)
    {
        if (a < 0)
        {
            if (a > max_negative || max_negative == 0)
            {
                max_negative = a;
            }
        }
        else
        {
            if (a < min_positive || min_positive == 0)
            {
                min_positive = a;
            }
        }
        cin >> a;
    }
    cout << "El mayor de los negativos es: " << max_negative << endl;
    cout << "El menor de los positivos es: " << min_positive << endl;
    return 0;
}
