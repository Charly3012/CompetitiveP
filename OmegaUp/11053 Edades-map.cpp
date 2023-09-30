#include <iostream>
#include <map>

int main()
{
    int n;
    std::cin >> n;

    std::map<int, int> frecuencia; // Un mapa para almacenar las edades y sus frecuencias

    for (int i = 0; i < n; i++)
    {
        int edad;
        std::cin >> edad;

        // Incrementa la frecuencia de esta edad en el mapa
        frecuencia[edad]++;
    }

    // Itera a través del mapa e imprime las edades y sus frecuencias en orden ascendente
    for (const auto &par : frecuencia)
    {
        std::cout << par.first << " " << par.second << std::endl;
    }

    return 0;
}
