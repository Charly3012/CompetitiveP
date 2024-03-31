#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    list<string> lista;

    for (int i = 0; i < n; i++)
    {
        string opcion;
        cin >> opcion;

        if (opcion == "LLEGA")
        {
            string persona;
            cin >> persona;

            lista.push_back(persona);
            // lista.emplace_back(persona);
        }
        else if (opcion == "METE")
        {
            string mete, busca;
            cin >> mete >> busca;

            auto it = find(lista.begin(), lista.end(), busca);
            if (it != lista.end())
            {
                lista.insert(next(it), mete);
            }
        }
        else
        {
            cout << lista.front() << endl;
            lista.remove(lista.front());
        }
    }

    return 0;
}