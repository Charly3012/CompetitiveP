#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string cadena;

    cin >> cadena;

    cout << cadena.size();

    for (int i = 0; i < cadena.length(); i++)
    {
        if (cadena[i] == 1)
        {
            cout << 0;
        }
        if (cadena[i] == 0)
        {
            cout << 0;
        }
    }

    return 0;
}