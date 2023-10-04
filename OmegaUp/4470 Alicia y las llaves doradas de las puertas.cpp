// Nota: esta respuesta tiene un estatus TLE en omega up pero el resultado para todos los casos es valido

#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> pedirDatos(int n);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    vector<int> nv; // Doors
    vector<int> mv; // Keys
    vector<int> resultado;

    cin >> n;
    nv = pedirDatos(n);
    cin >> m;
    mv = pedirDatos(m);

    for (int i = 0; i < mv.size(); i++)
    {

        vector<int>::iterator f = find(nv.begin(), nv.end(), mv.at(i));
        if (f != nv.end())
        {
            int temp = (f - nv.begin());
            resultado.emplace_back(temp + 1);
        }
        else
        {
            resultado.emplace_back(0);
        }
    }

    for (int i = 0; i < resultado.size(); i++)
    {
        cout << resultado.at(i) << " ";
    }

    return 0;
}

vector<int> pedirDatos(int n)
{
    vector<int> vTemporal;

    for (int i = 0; i < n; i++)
    {
        int temporal;
        cin >> temporal;
        vTemporal.push_back(temporal);
    }

    return vTemporal;
}