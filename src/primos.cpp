// algorithm Sieve of Eratosthenes is
//     input: an integer n > 1.
//     output: all prime numbers from 2 through n.

//     let A be an array of Boolean values, indexed by integers 2 to n,
//     initially all set to true.

//     for i = 2, 3, 4, ..., not exceeding √n do
//         if A[i] is true
//             for j = i2, i2+i, i2+2i, i2+3i, ..., not exceeding n do
//                 set A[j] := false

//     return all i such that A[i] is true.
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<int> Sieve(int n)
{
    vector<int> primes = vector<int>();
    if (n < 2)
        return primes;
    vector<bool> input(n + 1, true);
    int sqrtN = (int)sqrt(n);
    for (int i = 2; i <= sqrtN; i++)
    {
        if (!input[i])
        {
            continue;
        }
        for (int j = i * i; j <= n; j += i)
        {
            input[j] = false;
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        if (input[i])
        {
            primes.push_back(i);
        }
    }
    return primes;
}
int main()
{
    cout << "Escriba un numero entero mayor que 2" << endl;
    int prompt;
    cin >> prompt;
    vector<int> primes = Sieve(prompt);
    for (int i = 0; i < primes.size(); i++)
    {
        cout << primes[i] << '\t';
    }
    return 0;
}
