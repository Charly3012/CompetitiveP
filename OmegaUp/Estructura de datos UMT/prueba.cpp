#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string instruccion, item;
    cin >> instruccion >> item;
    cout << instruccion << endl;
    cout << item;

    if (item == "HIERRO")
    {
        cout << "a";
    }
    else
    {
        cout << "b";
    }

    return 0;
}