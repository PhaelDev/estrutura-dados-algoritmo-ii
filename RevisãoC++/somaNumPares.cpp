/*Escreva um programa que calcule a soma de
todos os números pares de 2 até 100.*/

#include <iostream>
using namespace std;

int main (){

    int soma=0;

    for (int i=2;i<=100;i++){
        if (i%2==0){
            soma += i;
        }
    }

    cout << "Resultado da soma dos números pares é: " << soma << endl;

    return 0;
}