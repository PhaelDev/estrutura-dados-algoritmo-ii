/*Crie um programa que mostre a tabuada de um
número fornecido pelo usuário (1 a 10).*/

#include <iostream>
using namespace std;

int main (){

    int tabuada;

    cout << "Digite o valor da tabuada desejada: " << endl;
    cin >> tabuada;
    for (int i=1;i<=10;i++){
        cout << tabuada << " x " << i << " = " << i*tabuada << endl;
    }

    return 0;
}