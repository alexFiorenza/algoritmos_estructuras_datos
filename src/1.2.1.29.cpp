// Lección 1
// 1.2.1.29. Conjunto dividido por valores 0 (cero)

#include <iostream>
using namespace std;
int main()
{
    cout << "Ingrese una serie de números positivo: " << endl;
    int prompt, subsets = 0, subsets_total = 0, max_total_value = 0, max_total_position, max_total_relative_position = 0;
    double mean, min, quantity = 0, subset_sumatory = 0;
    cin >> prompt;
    while (prompt >= 0)
    {
        if (prompt == 0)
        {
            subsets++;
            subsets_total += subset_sumatory;
            mean = subset_sumatory / quantity;
            cout << "" << endl;
            cout << "El subconjunto ingresado tiene: " << endl;
            cout << "De promedio: " << mean << endl;
            cout << "De valor minimo: " << min << endl;
            cout << "" << endl;
            mean = 0;
            subset_sumatory = 0;
            quantity = 0;
            min = 0;
        }
        else
        {
            if (prompt < min || quantity == 0)
            {
                min = prompt;
            }
            if (max_total_value < prompt)
            {
                max_total_value = prompt;
                max_total_position = subsets;
                max_total_relative_position = quantity;
            }
            quantity++;
            subset_sumatory += prompt;
        }
        cin >> prompt;
    }
    cout << "De su conjunto total obtuvimos que: " << endl;
    cout << "La cantidad de subconjuntos es: " << subsets << endl;
    cout << "La sumatoria de sus valores es: " << subsets_total << endl;
    cout << "Número del subconjunto en el que se ingreso el mayor valor: " << max_total_position++ << endl;
    cout << "Siendo el valor: " << max_total_value << endl;
    cout << "Y su posicion relativa: " << max_total_relative_position << endl;
    return 0;
}
