// Lección 1
// 1.2.1.30. Seguidilla

#include <iostream>
using namespace std;
int main()
{
    cout << "Ingrese una serie de números positivo: " << endl;
    int prompt, consecutives_ascendant_count = 0, sucession_quantity = 0, sucession_relative_position = 0, lastValue = 0, larger_succession_position = 0, same_iteration = false, larger_succession_value = 0;
    cin >> prompt;
    while (prompt != 0)
    {
        // Inicializacion
        if (lastValue == 0)
        {
            lastValue = prompt;
            cin >> prompt;
            continue;
        }
        if (prompt > lastValue)
        {
            if (sucession_quantity == 0)
            {
                sucession_quantity += 2;
            }
            else
            {
                same_iteration = true;
                sucession_quantity++;
            }
        }
        else
        {
            if (sucession_quantity != 0)
            {
                consecutives_ascendant_count++;
                if (sucession_quantity > larger_succession_value || larger_succession_position == 0)
                {
                    larger_succession_position = consecutives_ascendant_count;
                    larger_succession_value = sucession_quantity;
                }
                cout << sucession_quantity << " elementos" << endl;
            }
            same_iteration = false;
            sucession_quantity = 0;
        }
        lastValue = prompt;
        cin >> prompt;
    }
    cout << "Cantidad de seguidillas: " << consecutives_ascendant_count << endl;
    cout << "La posicion relativa de la seguidilla mas larga es: " << larger_succession_position << endl;
    return 0;
}
