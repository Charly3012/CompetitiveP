#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;         // Número de problemas
    int k;         // Problem solving skill of kisha
    vector<int> p; // problemas

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        p.emplace_back(temp);
    }

    while (p.empty() == false && p.front() <= k)
    {
        p.erase(p.begin());
    }

    while (p.empty() == false && p.back() <= k)
    {
        p.pop_back();
    }

    n = n - p.size();
    cout << n << endl;

    return 0;
}
