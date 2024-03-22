#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<string> tacos, refrescos;
    string instruccion, nombre;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> instruccion >> nombre;

        if (instruccion == "LLEGA")
        {
            tacos.push(nombre);
        }
        else
        {
            if (nombre == "TACO")
            {
                refrescos.push(tacos.front());
                tacos.pop();
            }
            else
            {
                refrescos.pop();
            }
        }
    }

    while (!tacos.empty())
    {
        cout << tacos.front();
        tacos.pop();
        cout << (!tacos.empty() ? " " : "");
    }

    while (!refrescos.empty())
    {
        cout << refrescos.front();
        refrescos.pop();
        cout << (!refrescos.empty() ? " " : "");
    }

    cout << endl;

    return 0;
}