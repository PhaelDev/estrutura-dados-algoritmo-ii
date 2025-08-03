/* Requisitos
1. Solicite ao usuário o tamanho do vetor.
2. Aloque dinamicamente um vetor de números inteiros.
3. preencha o vetor com valores fornecidas pelo usuário.
4. Calcule e mostre a média dos valores.

Sáida esperada:
1. Os valores inseridos no vetor.
2. A média dos valores.
3. Mensagem de memória liberada.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    int tamanho;
    double media=0;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tamanho;
    int* vetor =  new int[tamanho];

    for (int i=0; i<tamanho;i++){
        cout << "Insira um valor no vetor: " << endl;
        cin >> vetor[i];
    }

    for (int i=0;i<tamanho;i++){
        media += vetor[i];
    }
    media = media/tamanho;

    cout << fixed << setprecision(2);
    cout << "média: "<< media << endl;

    delete[] vetor;

    cout << "Memória Liberada." << endl;

    return 0;

}
