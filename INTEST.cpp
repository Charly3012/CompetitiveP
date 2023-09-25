#include <iostream>

using namespace std;

int main()
{

    int k, n, t, cont = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if ((t % k) == 0)
        {
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
}