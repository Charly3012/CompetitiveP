#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, max = 0, vmax, chequeo;
    vector<int> vec;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        vec.emplace_back(aux);
    }

    unordered_map<int, int> frecuencia;

    for (int j = 0; j < n; j++)
    {
        frecuencia[vec.at(j)]++;
    }

    /*
    Sirve pare recorrer los elementos de un unorder map usando un iterador, por eso se declara como auto
    for (auto it = frecuencia.begin(); it != frecuencia.end(); ++it)
    {
        como se trata de un iterador se tiene que tratar con -> el apunte a valores de varibles
        cout << "Numero: " << it->first << ", Frecuencia: " << it->second << endl;
    }*/

    for (auto t = frecuencia.begin(); t != frecuencia.end(); t++)
    {
        if (t->second > max)
        {
            max = t->second;
            vmax = t->first;
        }
        if (t->second == max)
        {
            chequeo = t->first;
        }
    }

    /*

        for (int k = 0; k < vec.size(); k++)
        {
            cout << frecuencia[k] << endl;
            if (frecuencia[k] > max)
            {
                max = frecuencia
            }
            if (frecuencia[k] == max && frecuencia[k] > 0)
            {
                cout << "Nadie fue expulsado" << endl;
                return 0;
            }
        }

    */

    cout << ((vmax != chequeo) ? "Nadie" : "#" + to_string(vmax)) << " fue expulsado" << endl;

    return 0;
}