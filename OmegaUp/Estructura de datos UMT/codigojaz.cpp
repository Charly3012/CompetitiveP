#include <bits/stdc++.h>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int D, C;
    string accion;
    string coraza;

    cin >> C >> D;
    stack<string> pila;

    for (int i = 0; i < D; i++)
    {
        cin >> accion;
        if (accion == "PONTE")
        {
            cin >> coraza;
            if (pila.size() < C)
            {

                pila.push(coraza);
                cout << coraza << endl;
            }
            else
            {

                cout << "IMPOSIBLE" << endl;
            }
        }
        else
        {
            if (!pila.empty())
            {
                cout << pila.top() << endl;
                pila.pop();
            }
            else
            {
                cout << "IMPOSIBLE" << endl;
            }
        }
    }
    return 0;
}
