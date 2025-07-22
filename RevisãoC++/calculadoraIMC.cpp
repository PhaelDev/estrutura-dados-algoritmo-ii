/*Crie uma função chamada calculaIMC que recebe o peso(em kg) e altura (em metros) como paramêtro e retorna o IMC. A fórmula do IMC é peso / (altura * altura). Teste sua função no programa principal com diversos valores.*/

#include <iostream>
#include <iomanip>//biblioteca para formatação
using namespace std;

float calculaIMC(float peso, float altura){
    return ((peso) /(altura * altura));
}

int main (){

    struct imc{
        float kilos;
        float metros;
    };

    imc pessoa;

    cout << "quantos kilos vc pesa?" << endl;
    cin >> pessoa.kilos;

    cout << "qual a sua altura?" << endl;
    cin >> pessoa.metros;

    float resultado = calculaIMC(pessoa.kilos,pessoa.metros);

    cout << "Seu IMC é --> " << fixed << setprecision(2) << resultado << endl;

    return 0;
}