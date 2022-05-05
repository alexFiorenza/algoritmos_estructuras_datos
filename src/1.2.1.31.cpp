// Lección 1
// 1.2.1.31. Palabras dentro de una oración

#include <iostream>
using namespace std;
int main()
{
    cout << "Ingrese una serie de palabras una por vez separando con un '_' " << endl;
    char prompt;
    int counter_words = 1, quantity_longest_word = 0, tmp_counter = 0, lastWord = 0;
    bool isAscending = false;
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    cin >> prompt;
    while (prompt != '.')
    {
        if (prompt == '_')
        {
            if (tmp_counter > lastWord)
            {
                isAscending = true;
            }
            else
            {
                isAscending = false;
            }
            lastWord = tmp_counter;
            if (tmp_counter > quantity_longest_word)
            {
                quantity_longest_word = tmp_counter;
            }
            tmp_counter = 0;
            counter_words++;
        }
        switch (prompt)
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        default:
            break;
        }
        if (counter_words == 1)
        {
            quantity_longest_word++;
            lastWord++;
        }
        tmp_counter++;
        cin >> prompt;
    }
    cout << "Introduciste: " << counter_words << " palabras" << endl;
    cout << "La vocal a aparecio: " << a << " veces" << endl;
    cout << "La vocal e aparecio: " << e << " veces" << endl;
    cout << "La vocal i aparecio: " << i << " veces" << endl;
    cout << "La vocal o aparecio: " << o << " veces" << endl;
    cout << "La vocal u aparecio: " << u << " veces" << endl;
    if (isAscending)
    {
        cout << "Es ascendente " << endl;
    }
    else
    {
        cout << "No es ascendente" << endl;
    }
    return 0;
}
