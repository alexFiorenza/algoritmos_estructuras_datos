// Lección 1
// 1.2.1.27. Persona más joven, persona más vieja

#include <iostream>
using namespace std;
int main()
{
    string n, older_name, younger_name;
    int f, counter = 0, younger, older;
    // En este caso se aplico hasta tres personas pero puede ser hasta la que quieras
    while (counter < 3)
    {
        cout << "Ingrese su nombre y su fecha de nacimiento en forma aaaammdd" << endl;
        cin >> n >> f;
        if (f > younger || counter == 0)
        {
            younger = f;
            younger_name = n;
        }
        if (f < older || counter == 0)
        {
            older = f;
            older_name = n;
        }
        counter++;
    }
    cout << "La persona mas joven es: " << younger_name << endl;
    cout << "La persona mas vieja es: " << older_name << endl;
    return 0;
}
