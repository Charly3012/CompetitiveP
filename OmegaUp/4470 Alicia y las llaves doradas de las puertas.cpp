#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> pedirDatos(int n);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    vector<int> nv, mv;

    cin >> n;
    nv = pedirDatos(n);
    cin >> m;
    mv = pedirDatos(m);

    for (int i = 0; i < mv.size(); i++)
    {
        for (int k = 0; k < nv.size(); k++)
        {
            if ()
        }
    }

    return 0;
}

vector<int> pedirDatos(int n)
{
    vector<int> vTemporal;

    for (int i = 0; i < n; i++)
    {
        int temporal;
        cin >> temporal;
        vTemporal.push_back(temporal);
    }

    return vTemporal;
}