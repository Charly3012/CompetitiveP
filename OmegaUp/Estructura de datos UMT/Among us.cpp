#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, max = 0;
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

    cout << "#" << max << " fue expulsado" << endl;

    return 0;
}