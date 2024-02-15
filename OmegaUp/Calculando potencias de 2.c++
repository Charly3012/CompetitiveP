#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, resultado = 0, contador = 2;
    cin >> n;

    resultado = 2 * 2;

    while (resultado != n)
    {
        resultado = resultado * 2;
        contador++;
    }

    cout << contador << endl;

    return 0;
}