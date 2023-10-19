#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;
    while (!(a == -1 && b == -1))
    {

        if (b > a)
        {
            swap(a, b);
        }

        int r = (a) / (b + 1);
        if (a == 0 || b == 0)
        {
            r = r - 1;
        }

        cout << r + 1 << "\n";
        cin >> a >> b;
    }

    return 0;
}