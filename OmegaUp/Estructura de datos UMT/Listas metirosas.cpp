#include <bits/stdc++.h>
#include <list>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, v, cont = 0;
    string salida;
    list<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        s.push_back(v);
    }

    salida += "NULL<-";
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if (*it % 2 == 0)
        {
            salida = salida + to_string(*it);
        }
        else
        {
            cont = cont + 1;
            salida = salida + "-1<->" + to_string(*it);
            // cout << "-1<->" << *it;
        }

        (((it) != s.end()) ? salida = salida + "<->" : salida = salida + "->NULL");
    }

    cout << cont << endl;
    cout << salida << endl;

    return 0;
}

/*
entrada
6
1 2 4 5 7 8

formato
3 (numero de -1 agregados)
NULL<--1<->1<->2<->4<->-1<->5<->-1<->7<->8->NULL
*/
