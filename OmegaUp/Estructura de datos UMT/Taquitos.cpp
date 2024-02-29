#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> cola;

    int n, tacosVendidos = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int opcion, tacos;

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cin >> tacos;
            cola.push(tacos);

            break;

        case 2:
            tacosVendidos += cola.front();
            // tacosVendidos = tacosVendidos + cola.front();
            cola.pop();

            break;

        case 3:
            cout << cola.size() << endl;

            break;

        default:
            cout << tacosVendidos << endl;
            break;
        }
    }

    return 0;
}