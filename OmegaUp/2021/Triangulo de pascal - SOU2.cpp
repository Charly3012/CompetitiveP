#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    long long suma[41]; // Ya que N,M <= 40

    suma[0] = 1;
    for (int i = 1; i <= 40; i++)
    {
        suma[i] = 2 * suma[i - 1];
    }

    for (int tc = 0; tc < T; tc++)
    {
        int M, N;
        cin >> M >> N;

        long long sumaAcumulada = 0;

        for (int i = M; i <= N; i++)
        {
            sumaAcumulada += suma[i];
        }

        cout << sumaAcumulada << endl;
    }

    return 0;
}
