/*Crie um programa que leia três notas de um aluno e calcule
sua média final. */

#include <iostream>
using namespace std;

int main (){

    float n[3];
    int i;
    for (i=0;i<3;i++){
        cout << "Digite a nota " << i << ": " <<endl;
        cin >> n[i]; 
    }

    cout << "A media final do aluno: " << (n[0]+n[1]+n[2])/3 << endl;

    return 0;
}