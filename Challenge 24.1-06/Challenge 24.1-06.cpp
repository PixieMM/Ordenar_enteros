#include <iostream>
#include <vector>

using namespace std;

// Función para imprimir un array
void imprimirArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Función para ordenar el array usando Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        // Últimos i elementos ya están en su lugar
        for (int j = 0; j < n - i - 1; ++j) {
            // Intercambiar si el elemento actual es mayor que el siguiente
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    // Definir un array de ejemplo
    vector<int> arr = {64, 25, 12, 22, 11};

    cout << "Array original:" << endl;
    imprimirArray(arr);

    // Llamar a la función bubbleSort para ordenar el array
    bubbleSort(arr);

    cout << "Array ordenado:" << endl;
    imprimirArray(arr);

    return 0;
}
