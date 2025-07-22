/*Crie uma função void chamada imprimirPadrao que recebe um número inteiro n como parâmetro e imprime um padrão de asteriscos em forma de triângulo.*/

#include <iostream>
using namespace std;

void imprimirPadrao(int numero){
    
    for (int i=1; i<=numero;i++){
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main () {

    int valor;

    cout << "digite o um numero para criação do triangulo: "<< endl;
    cin >> valor;

    imprimirPadrao(valor);

    return 0;
}