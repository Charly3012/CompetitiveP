#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, banderaMayor = 0, banderaMenor = 99999;
    string nombreMenor, nombreMayor;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        string nombreaux;
        int aux;

        cin >> nombreaux;
        cin >> aux;

        if (aux > banderaMayor)
        {
            banderaMayor = aux;
            nombreMayor = nombreaux;
        }

        if (aux < banderaMenor)
        {
            banderaMenor = aux;
            nombreMenor = nombreaux;
        }
    }

    cout << nombreMayor << " " << nombreMenor << endl;

    return 0;
}