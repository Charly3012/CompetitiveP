#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int numero;
    cin >> numero;

    if (numero == 0)
    {
        cout << "No hay risas sin vacaciones >(" << endl;
        return 0;
    }

    int ciudad = 0;
    while (numero > 0)
    {
        int ultimoBit = numero % 2;

        if (ultimoBit == 1)
        {
            cout << ciudad << endl;
        }

        numero = numero / 2;
        ciudad++;
    }

    return 0;
}