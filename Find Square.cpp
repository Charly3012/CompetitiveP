#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, cont = 0, bandera = 0, pn, pm; // n = filas, m = columnas

    float con1;

    // cin >> n >> m;
    n = 5;
    m = 6;
    char value[m];

    for (int i = 0; i < n; i++)
    {
        cin >> value;

        if (bandera == 1)
        {
        }
        else
        {
            for (int j = 0; i < m; i++)
            {
                if (value[j] == 'B')
                {
                    cont++;
                    bandera = 1;
                    pm = m;
                    pn = n;
                }
            }
        }
    }

    con1 = cont;
    con1 = (con1 / 2) + 1;
    pm = pm + con1;
    pn = pn - con1;

    cout << pm << " " << pn << endl;

    return 0;
}