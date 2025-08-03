/*Requisitos
1. Crie uma função chamada troca que recebe dois ponteiros para inteiro.
2. A função deve trocar os valores das variaveis apontadas.
3. Implemente a função main para testar a troca.
*/

#include <iostream>
using namespace std;

void troca (int *pValorA, int *pValorB){
    int auxiliar = *pValorA; //Salva o valor apontado por pValorA
    *pValorA = *pValorB; // Coloca o valor de pValorB em pValorA
    *pValorB = auxiliar; // Coloca o valor salvo em pValorB

}

int main (){

    int iValorA;
    int iValorB;

    cout << "Entre com os valores de A e B: "<< endl;
    cin >> iValorA >> iValorB;

    troca(&iValorA,&iValorB);

    cout << "Novo valor de A: " << iValorA << endl;
    cout << "Novo valor de B: " << iValorB << endl;



    return 0;
}