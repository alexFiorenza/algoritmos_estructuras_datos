// Lección 1
// 1.2.1.18. Factorial de los primeros números naturales

#include <iostream>
using namespace std;
int main()
{
    double a, i = 1, current = 1, factorial_counter = 1;
    int index;
    cout << "Ingrese un valor entero: " << endl;
    cin >> index;
    while (i <= index)
    {
        // i = 2
        while (factorial_counter <= i)
        {
            current = current * i;
            factorial_counter++;
        }
        cout << current << endl;
        i++;
    }
    return 0;
}