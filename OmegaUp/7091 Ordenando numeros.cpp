#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;

    for (int i = 0; i < 4; i++)
    {
        int temp;
        cin >> temp;
        v.emplace_back(temp);
    }

    sort(v.begin(), v.end());

    for (int j = 0; j < 4; j++)
    {
        cout << v.at(j) << " ";
    }

    return 0;
}