#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, p, max = 0, ps; 
    cin >> n; 

    for (int i = 0; i < n; i++)
    {
        cin >> p; 
        if(p > max){
            max = p;
            ps = (i + 1);
        }
    }

    cout << ps;

    return 0;
}