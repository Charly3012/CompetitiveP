#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;         // Cantidad de niños
    vector<int> v; // Vector de edades

    for (int i = 0; i < n; i++)
    {
        int temporal;
        cin >> temporal;
        v.push_back(temporal);
    }

    sort(v.begin(), v.end());

    return 0;
}