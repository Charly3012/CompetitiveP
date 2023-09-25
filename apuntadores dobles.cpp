#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;

    cin >> n >> q;

    int **a = new int *[n]; // create an array

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        a[i] = new int[k]; // create a new int
        for (int j = 0; j < k; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << a[x][y] << endl; // print the value
    }

    for (int i = 0; i < n; i++)
    {
        delete[] a[i]; // dellocate memory for each array
    }
    delete[] a; // dellocate memory for the array of pointers
    return 0;
}