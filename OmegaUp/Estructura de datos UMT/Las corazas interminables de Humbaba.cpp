#include <bits/stdc++.h>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int c, d;
    cin >> c >> d;
    stack<string> s;

    for (int i = 0; i < d; i++)
    {
        string instruccion;
        cin >> instruccion;

        if (instruccion == "PONTE")
        {
            string item;
            cin >> item;
            if (s.size() == c)
            {
                cout << "IMPOSIBLE" << endl;
            }
            else
            {
                s.push(item);
                cout << item << endl;
            }
        }
        else
        {
            if (s.empty())
            {
                cout << "IMPOSIBLE" << endl;
            }
            else
            {
                cout << s.top() << endl;
                s.pop();
            }
        }
    }

    return 0;
}