#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    float promedio = 0;

    for (int i = 0; i < 7; i++)
    {
        int aux;
        cin >> aux;
        promedio = promedio + aux;
    }

    promedio = promedio / 7;

    cout << fixed << setprecision(1) << round(promedio)  << endl;

    return 0;
}