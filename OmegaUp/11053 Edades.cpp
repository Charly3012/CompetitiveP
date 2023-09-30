#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;         // Cantidad de niños
    vector<int> v; // Vector de edades

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temporal;
        cin >> temporal;
        v.push_back(temporal);
    }

    sort(v.begin(), v.end());

    for (int k = 0; k < n; k++)
    {
        if (k == 0 || v.at(k) != v.at(k - 1))
        {
            cout << v.at(k) << " " << count(v.begin(), v.end(), v.at(k)) << endl;
        }
    }

    return 0;
}