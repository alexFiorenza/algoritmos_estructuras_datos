// Lección 1
// 1.2.1.28. Conjuntos y subconjuntos

#include <iostream>
using namespace std;
int main()
{
    int counter_n = 0, counter_m = 0, value = 0, positives_quantity = 0, negative_quantity = 0;
    double n, m, set_of_data = 0, max_n, min_total, total_data;
    cout << "Cuantos conjuntos vas a ingresar?" << endl;
    cin >> n;
    cout << "Cuantos valores tendra cada conjunto?" << endl;
    cin >> m;
    while (counter_n <= n)
    {
        if (counter_n != 0)
        {
            total_data += set_of_data;
            cout << "El valor promedio del conjunto es: " << set_of_data / m << endl;
            cout << "El maximo valor del conjunto es: " << max_n << endl;
            cout << "El porcentaje de valores positivos es: " << (positives_quantity * 100) / m << "%" << endl;
        }
        if (counter_n < n)
        {
            cout << "Introduzca los valores de su conjunto" << endl;
            max_n = 0;
            counter_m = 0;
            positives_quantity = 0;
            value = 0;
            set_of_data = 0;
            while (counter_m < m)
            {
                cin >> value;
                if (value > max_n)
                {
                    max_n = value;
                }
                if (value < min_total || counter_n == 0)
                {
                    min_total = value;
                }
                if (value > 0)
                {
                    positives_quantity++;
                }
                else
                {
                    negative_quantity++;
                }
                set_of_data += value;
                counter_m++;
            }
        }
        counter_n++;
    }
    cout << "De su lote de datos obtuvimos que: " << endl;
    cout << "El valor promedio es: " << total_data / (m * n) << endl;
    cout << "El porcentaje de valores negativos es: " << (negative_quantity * 100) / (m * n) << "%" << endl;
    return 0;
}
