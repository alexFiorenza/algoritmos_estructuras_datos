// Lección 1
// 1.2.1.22. Primeros múltiplos flexible

#include <iostream>
using namespace std;
int main()
{
    int n, a, b, index, current = 0, hasChanged;
    cout << "Ingrese tres valores numericos distintos: " << endl;
    cin >> n >> a >> b;
    cout << "El " << n << "ésimo multiplo de " << a << " que no es multiplo de " << b << " es: ";
    while (index <= n)
    {
        if ((a * index) % b != 0)
        {
            current = 5 * index;
            hasChanged = true;
        }
        else
        {
            hasChanged = false;
            n++;
        }
        index++;
    }
    cout << current << endl;
    return 0;
}
