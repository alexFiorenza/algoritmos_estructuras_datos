// Lección 1
// 1.2.1.17. Múltiplos
#include <iostream>
using namespace std;
int main()
{
    int index, i = 1, current = 5, hasChanged = false;
    cout << "Ingrese un valor entero" << endl;
    cin >> index;
    cout << "Los primeros " << index << " números multiplos de 5 y no de 3 son: " << endl;
    while (i <= index)
    {
        if ((5 * i) % 3 != 0)
        {
            current = 5 * i;
            hasChanged = true;
            cout << current << endl;
        }
        else
        {
            hasChanged = false;
            index++;
        }
        i++;
    }
    return 0;
}
