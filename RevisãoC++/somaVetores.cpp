#include <iostream>

using namespace std;

int main (){

    int vetor[5];
    int soma=0;

    for (int i=0;i<5;i++){
        cin >> vetor[i];
        soma += vetor[i];
    }

    cout << "Valor da soma dos elementos: " << soma << endl;

    return 0;

}