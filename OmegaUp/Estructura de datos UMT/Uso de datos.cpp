#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, n;

    cin >> x;
    cin >> n;
    x = x * (n + 1);

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        x = x - aux;
    }

    cout << x << endl;

    return 0;
}