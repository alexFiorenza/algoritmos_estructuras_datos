// Lección 1
// 1.2.1.19. Docenas
#include <iostream>
using namespace std;
int main()
{
    int v, counter_1 = 0, counter_2 = 0, counter_3 = 0, counter_4 = 0;
    cin >> v;
    while (v >= 0)
    {
        if (v <= 12 && v != 0)
        {
            counter_1++;
        }
        else if (12 < v && v <= 24)
        {
            counter_2++;
        }
        else if (24 < v && v <= 36)
        {
            counter_3++;
        }
        else
        {
            counter_4++;
        }
        cin >> v;
    }
    cout << "La cantidad de veces que se han ingresado valores menores o iguales a 12 han sido: " << counter_1 << endl;
    cout << "La cantidad de veces que se han ingresado valores mayores  a 12 y menores o iguales a 24 han sido: " << counter_2 << endl;
    cout << "La cantidad de veces que se han ingresado valores mayores  a 24 y menores o iguales a 36 han sido: " << counter_3 << endl;
    cout << "La cantidad de veces que se han ingresado valores iguales a 0 han sido: " << counter_4 << endl;
}
