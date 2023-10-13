#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;         // Numero de playeras
    vector<int> p; // Playeras

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        p.emplace_back(temp);
    }

    sort(p.begin(), p.end());

    cout << p.at(3);

    return 0;
}