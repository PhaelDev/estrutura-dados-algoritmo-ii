#include <iostream>
using namespace std;

void soma (int piValorA, int piValorB, int *piResultado){
    cout << "Endereço de piResultado: " << piResultado << endl;
    //Valor está sendo colocado diretamente na memória
    *piResultado = piValorA + piValorB;
}

int main (){

    int iValorA;
    int iValorB;
    int iResultado;

    cout << "Entre com os valores A e B:" << endl;
    cin >> iValorA >> iValorB;

    cout << "Endereço de iResultado: " << &iResultado << endl;

    soma(iValorA,iValorB,&iResultado); //Passando o endereço na memória da variável

    cout << "Soma: " << iResultado << endl;

    return 0;
}