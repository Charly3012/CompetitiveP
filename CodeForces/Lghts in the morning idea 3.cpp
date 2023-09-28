// Código para un semáforo

#include <bits/stdc++.h>
using namespace std;

bool individualCheck(int n, int d);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; // Traffic lights
    int d; // Distance
    bool control = true;

    cin >> n >> d;

    for (int i = 0; i < n; i++)
    {
        control = individualCheck(n, d);
        if (control == false)
        {
            break;
        }
    }

    if (control == false)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}

bool individualCheck(int n, int d)
{
    int x; // Distance to the traffic light
    int a; // Turn green first time
    int g; // Turn green
    int r; // Turn red

    cin >> x >> a >> g >> r;

    
    if ((x > a && x < (a + g)))
    {
        return true;
    }
    else
    {
        bool banderaLuz = true;
        for (int j = a; j < x;)
        {
            if (banderaLuz == true)
            {
                j = j + g;
                banderaLuz = false;
            }
            else
            {
                j = j + r;
                banderaLuz = true;
            }
        }

        return banderaLuz;
    }
}
