/*Desenvolva uma função void chamada inverterArray que recebe um array de inteiros e seu tamanho como parâmetros, e inverte a ordem dos elementos do array. A função deve modificar o array original.*/

#include <iostream>
using namespace std;

void inverterArray(int arr[], int tamanho) {
    int inicio = 0, fim = tamanho - 1;
    while (inicio < fim) {
        int temp = arr[inicio];
        arr[inicio] = arr[fim];
        arr[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    cout << "Array original: ";
    for (int i = 0; i < tamanho; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    inverterArray(arr, tamanho);

    cout << "Array invertido: ";
    for (int i = 0; i < tamanho; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}