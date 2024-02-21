#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> s;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ins;
        cin >> ins;

        switch (ins)
        {
        case 1:
            int color;
            cin >> color;
            s.push(color);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            cout << s.size() << endl;
            break;

        case 4:
            cout << s.top() << endl;
            break;

        default:

            break;
        }
    }

    return 0;
}