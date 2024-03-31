#include <bits/stdc++.h>
using namespace std;

// watermelon

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int w; // Peso de la sandía

    cin >> w;

    if (w >= 4 && w % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}