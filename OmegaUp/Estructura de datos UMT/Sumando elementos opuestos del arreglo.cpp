#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector<int> vec;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        vec.emplace_back(aux);
    }

    for (int k = 0; k < (n / 2); k++)
    {

        cout << (vec.at(k) + vec.at(n - k - 1)) << " ";
    }
    cout << endl;

    return 0;
}