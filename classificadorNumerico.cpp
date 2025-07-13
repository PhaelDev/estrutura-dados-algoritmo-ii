/*Exercício 2: Classificador de Números
Desenvolva um programa que:
Leia um número inteiro
Verifique se é positivo ou negativo
Verifique se é par ou ímpar
Mostre ambas as classificações */

#include <iostream>
using namespace std;

int main (){

    int numero;
    cin >> numero;

    if (numero%2==0){
        cout << "O numero " << numero << " é Par!" << endl;
        if (numero > 0){
            cout << "O numero é positivo!" << endl;
        } else {
            cout << "O numero é negativo!" << endl;
        }
    } else {
        cout << "O numero " << numero << " é Impar!" << endl;
            if (numero > 0){
                cout << "O numero é positivo!" << endl;
            } else {
                cout << "O numero é negativo!" << endl;
            }
        }

    return 0;
}