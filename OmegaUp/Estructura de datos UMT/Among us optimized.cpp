#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, max = 0, vmax, chequeo;
    cin >> n;
    unordered_map<int, int> frecuencia;

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        frecuencia[aux]++;
    }

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

    cout << ((vmax != chequeo) ? "Nadie" : "#" + to_string(vmax)) << " fue expulsado" << endl;

    return 0;
}