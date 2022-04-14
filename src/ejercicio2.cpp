#include <iostream>
#include <string>
using namespace std;
void Calculate(int input)
{
    int dividedValue = input / 5;
    cout << "La quinta parte del valor ingresado es:" << dividedValue << endl;
    cout << "El resto de dividir ese numero por 5:" << dividedValue % 5 << endl;
    cout << "El resto de dividir ese numero por 7 y luego por 5: " << dividedValue / 7 << endl;
}
int main()
{
    int a;
    cout << "Ingrese un valor numerico: " << endl;
    cin >> a;
    Calculate(a);
    return 0;
}