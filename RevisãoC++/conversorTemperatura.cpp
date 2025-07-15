/*Desenvolva um programa que converta temperatura de
Celsius para Fahrenheit.
Fahrenheit=(celsius.9/5)+32
*/

#include <iostream>
using namespace std;

int main (){

    float celsius;

    cout << "Digite a temperatura em Celsius para converter para Fahrenheit: " << endl;
    cin >> celsius;

    cout << "Temperatura em Fahrenheit: " << (celsius*9/5)+32 << " ºF " << endl;

    return 0;
}