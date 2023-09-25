// Código para un semáforo

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; // Traffic lights
    int d; // Distance

    return 0;
}

bool individualCheck(int n, int d)
{
    int x; // Distance to the traffic light
    int a; // Turn green first time
    int g; // Turn green
    int r; // Turn red

    if (x > d || (x > a && x < (a + g)))
    {
        return false;
    }

    return true;
}