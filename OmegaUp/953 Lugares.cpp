#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    unordered_map<int, int> p;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        auto it2 = p.find(aux);
        ((!(it2 != p.end())) ? p[aux] = i : aux = aux);
    }

    for (int j = 0; j < m; j++)
    {
        int aux2;
        cin >> aux2;
        auto it = p.find(aux2);
        cout << ((it != p.end()) ? to_string(it->second) : "-1") << endl;
    }

    return 0;
}