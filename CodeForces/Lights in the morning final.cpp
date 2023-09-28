#include <bits/stdc++.h>
using namespace std;

bool individualCheck(int n);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; // Traffic lights
    int d; // Distance
    bool control;

    cin >> n >> d;

    for (int i = 0; i < n; i++)
    {
        control = individualCheck(n);
        
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

bool individualCheck(int n)
{

    int x; // Distance to the traffic light
    int a; // Turn green first time
    int g; // Turn green
    int r; // Turn red

    cin >> x >> a >> g >> r;

    x -= a;

    if(x < 0){
        return false;
    
    }
    if (x % (g + r) >= g)
    {
        return true;
    }
    else
    {
        return false;
    }
}