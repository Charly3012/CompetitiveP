#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;       // Numero de playeras
    int c1 = -1; // El mas caro
    int c2 = -1; // El segundo mas caro
    int c3 = -1; // El tercero mas caro

    cin >> n;

    for (int j = 0; j < n; j++)
    {
        int precio;
        cin >> precio;

        if (precio > c1)
        {
            c3 = c2;
            c2 = c1;
            c2 = precio;
        }
        else if (precio > c2)
        {
            c3 = c2;
            c2 = precio;
        }
        else if (precio > c3)
        {
            c3 = precio;
        }
    }

    cout << c3 << endl;

    return 0;
}
