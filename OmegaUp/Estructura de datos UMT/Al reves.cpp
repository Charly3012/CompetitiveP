#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string cadena;

    getline(cin, cadena);

    for (int i = 0; i < cadena.size(); i++)
    {
        if (cadena[i] == '0')
        {
            cout << 1;
        }
        else if (cadena[i] == '1')
        {
            cout << 0;
        }
        else
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}