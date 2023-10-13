#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{

    int e;         // builds
    vector<int> h; // height

    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int temp;
        cin >> temp;
        h.emplace_back(temp);
    }

    for (int k = 0; k < h.size(); k++)
    {
        int front = 0, back = 0;
        int cFront = k + 1, cBack = k - 1;

        while (cFront < e && h.at(cFront) < h.at(k))
        {
            front++;
            cFront++;
        }

        while (cBack > 0 && h.at(cBack) < h.at(k))
        {
            back++;
            cBack--;
        }

        int total = front + back + 1;

        h[k] = total;
    }

    for (int k = 0; k < e; k++)
    {
        cout << h.at(k) << " ";
    }

    return 0;
}