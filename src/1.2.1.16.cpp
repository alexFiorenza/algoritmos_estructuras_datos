// Lección 1
// 1.2.1.16. Número de Fibonacci
#include <iostream>
using namespace std;
int main()
{
    int index, i = 0, current = 1, previous = 1;
    cout << "Ingrese el indice de la sucesion fibonacci: " << endl;
    cin >> index;
    while (i < index)
    {
        // Entramos a partir del indice 2 ya que la primera sucesion es 1,1 la cual vamos a ignorar
        if (i > 1)
        {
            current = current + previous;
            previous = current - previous;
        }
        i++;
    }
    cout << "El indice que ha seleccionado corresponde al número:  " << current << " en la sucesfion Fibonacci" << endl;
    return 0;
}
