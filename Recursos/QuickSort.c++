#include <iostream>
#include <vector>

using namespace std;

// Función para intercambiar dos elementos del arreglo
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Función para seleccionar el pivote y dividir el arreglo
int particion(vector<int> &arr, int primero, int final)
{
    int pivote = arr[final]; // Se selecciona el ultimo elemento como pivote
    int i = (primero - 1);

    for (int j = primero; j < final; j++)
    {
        if (arr[j] < pivote)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[final]);
    return (i + 1); // devuelve la nueva posición del pivote
}

// Función principal de Quicksort
void quicksort(vector<int> &arr, int primero, int final)
{
    if (primero < final)
    {
        int pi = particion(arr, primero, final);
        quicksort(arr, primero, pi - 1);
        quicksort(arr, pi + 1, final);
    }
}

// Función para imprimir el arreglo
void printArray(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    quicksort(arr, 0, n - 1); //(arreglo a ordenar, indice del primer elemento a ordenar, indicie del ultimo elemento a ordenar)
    cout << "Arreglo ordenado: " << endl;
    printArray(arr);
    return 0;
}