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
        /*if (control == false)
        {
            break;
        }*/
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

    if (x > d)
    {
        return false;
    }
    if ((x > a && x < (a + g)))
    {
        return true;
    }
    else
    {
        int contador = 0;
        bool semaforo = true;
        while (contador != n)
        {
            cin >> x >> a >> g >> r;
            semaforo = iteradorSemaforo(x, a, g, r);
            contador++;
        }
    }
}

bool iteradorSemaforo(int x, int a, int g, int r)
{
    bool control = true; // Determina el estado del semaforo 1 = verde y 0 = rojo
    int paso = 0;        // Para determinar que estado de la sucesión sigue

    for (int j = 1; j < x;)
    {
        if (paso == 0)
        {
            j = j + g;
            paso = 1;
            control = true;
        }
        else
        {
            j = j + r;
            paso = 0;
            control = false;
        }
    }

    return control;
}