// Lección 1
// 1.2.1.8. Separar los atributos de una fecha
#include <iostream>
using namespace std;

int main()
{
    cout << "Ingrese una fecha en formato aaaammdd" << endl;
    int date;
    cin >> date;
    cout << "El año ingresado es: " << date / 10000 << endl;
    cout << "El mes ingresado es: " << ((date - (date % 100)) % 10000) / 100 << endl;
    cout << "El dia ingresado es: " << date % 100 << endl;
    return 0;
}
