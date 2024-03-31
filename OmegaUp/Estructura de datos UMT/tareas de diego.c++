#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, p, contador = 0;
    vector<int> vec;

    cin >> n >> p;

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        if (aux > p)
        {
            break;
        }
        contador++;
    }

    cout << n - contador << endl;

    return 0;
}