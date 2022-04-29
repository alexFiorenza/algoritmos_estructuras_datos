// Lección 1
// 1.2.1.12. Producto mediante sumas sucesivas
#include <iostream>
using namespace std;
int main()
{
    int a, b, result = 0;
    cout << "Introduzca dos valores numericos: " << endl;
    cin >> a >> b;
    int counter = 0;
    while (counter < b)
    {
        // 5*3 = 5+5+5
        result = a + result;
        counter++;
    }
    cout << "Su producto mediante sumas sucesivas es: " << result << endl;
    return 0;
}
