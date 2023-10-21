#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, temp, mejorCamino;
    int tablero[101][101];

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> temp;
            if (temp % 2 == 0)
            {
                tablero[i][j] = 1;
            }
        }
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            mejorCamino = max(tablero[i + 1][j], tablero[i + 1][j + 1]);
            tablero[i][j] += mejorCamino;
        }
    }

    cout << tablero[1][1] << endl;

    return 0;
}