/*Desenvolva um programa que encontre o maior e o menor
valor em um vetor de 10 números.*/

#include <iostream>
using namespace std;

int main (){

    int maior=-99999,menor=99999;
    int valores[10];

    for(int i=0;i<10;i++){
        cin >> valores[i];
        if (valores[i]< menor){
            menor = valores[i];
            continue;
        } else if (valores[i]> maior){
            maior = valores[i];
            continue;
        }
    }

    cout << "MAIOR: " << maior << endl << "MENOR: " << menor << endl;
    return 0;
}