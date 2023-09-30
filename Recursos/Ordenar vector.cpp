#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

void imprimirVector(vector<int> v);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int temporal;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> temporal;
        v.push_back(temporal);
    }

    cout << "\nDesordenado";
    imprimirVector(v);

    sort(v.begin(), v.end());

    cout << "\nOrdenado";
    imprimirVector(v);

    return 0;
}

void imprimirVector(vector<int> v)
{
    for (int j = 0; j < v.size(); j++)
    {
        cout << v.at(j) << endl;
    }
}