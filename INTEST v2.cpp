#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k, n, t, cont = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if ((t % k) == 0)
        {
            cont++;
        }
    }

    cout << cont << "\n";

    return 0;
}