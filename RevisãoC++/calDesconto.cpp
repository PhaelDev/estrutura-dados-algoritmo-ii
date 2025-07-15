/*Exercício 1: Calculadora de Desconto
Crie um programa que:
Leia o valor de uma compra
Se o valor for maior que R$ 100, aplique
10% de desconto
Caso contrário, aplique 5% de desconto
Mostre o valor final com desconto*/

#include <iostream>
using namespace std;

int main (){
    float compra, desconto;

    cout << "Digite o valor da compra: "<< endl;
    cin >> compra;

    if (compra >100){
        desconto = ((compra*10)/100);
        cout << "Desconto de 10 por cento aplicado: "<< endl;
        cout << "valor do desconto: " << desconto << endl;
        cout << "Valor final: " << compra - desconto << " R$"<<endl;
    } else {
        desconto = ((compra*5)/100);
        cout << "Desconto de 5 por cento aplicado: "<< endl;
        cout << "valor do desconto: " << desconto << endl;
        cout << "Valor final: " << compra - desconto << " R$"<<endl;
    }
}