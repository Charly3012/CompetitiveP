#include <bits/stdc++.h>

using namespace std;

int iteradorSemaforo(int x, int a, int g, int r, int distancia);

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, d, x, a, g, r;
    int semaforo = 1, contador = 0; // para semaforo 1 = yes y 0 = not

    cin >> n >> d; // leer numero de semaforos y distancia

    while (contador != n)
    {
        cin >> x >> a >> g >> r;
        semaforo = iteradorSemaforo(x, a, g, r, d);
        contador++;
    }

    if (semaforo == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

int iteradorSemaforo(int x, int a, int g, int r, int distancia)
{
    int control = 1; // Determina el estado del semaforo 1 = verde y 0 = rojo
    int paso = 0;    // Para determinar que estado de la sucesión sigue

    for (int j = 1; j < x;)
    {
        if (paso == 0)
        {
            j = j + g;
            paso = 1;
            control = 1;
        }
        else
        {
            j = j + r;
            paso = 0;
            control = 0;
        }
    }

    return control;
}
