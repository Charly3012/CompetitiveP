#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        string w;
        cin >> w;

        if (w.length() <= 10)
        {
            cout << w << endl;
        }
        else
        {

            int longitud;
            longitud = w.length() - 2;

            cout << w.at(0) << longitud << w.at(longitud + 1) << endl;
        }
    }

    return 0;
}