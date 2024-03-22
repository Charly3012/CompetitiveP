#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // logica del ejercicio, se trata de usar el n mod 10 para sacar el termino mas significante (el ultimo)
    // podemos ir sacando y eliminando para ir formando el número inverso

    long numero, inverso = 0;
    cin >> numero;

    while (numero > 0)
    {
        // Sacamos el mas significativo
        inverso = inverso * 10;
        inverso = inverso + numero % 10;

        // eliminamos el menos significativo
        numero = numero / 10;
    }

    cout << inverso << endl;
    return 0;
}