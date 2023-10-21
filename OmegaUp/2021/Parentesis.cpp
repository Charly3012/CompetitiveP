#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string cadena;
    cin >> cadena;

    int cuenta = 0;
    bool validez = true;

    for (int i = 0; i < cadena.size(); i++)
    {
        if (cadena[i] == '(')
        {
            cuenta++;
        }
        else
        {
            if (cuenta == 0)
            {
                validez = false;
                break;
            }
            else
            {
                cuenta--;
            }
        }
    }

    if (cuenta > 0)
    {
        validez = false;
    }

    if (validez)
    {
        cout << "SI" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}