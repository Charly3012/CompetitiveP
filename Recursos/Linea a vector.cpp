#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> numeros;
    int numero;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> numero;
        numeros.push_back(numero);
    }

    for (int j = 0; j < numeros.size(); j++)
    {
        cout << numeros.at(j) << endl;
    }

    return 0;
}
