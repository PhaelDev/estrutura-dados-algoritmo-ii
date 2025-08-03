/* Requisitos do Programa
1. Crie uma Struct Aluno com: nome, matricula e nota
2. Solicite ao usuário a quantidade de alunos a serem cadastrados
3. Aloque dinamicamente um vetor de structs Aluno
4. Permita o cadastro das informações de cada aluno.

Saída Esperada
1. Lista de todos os alunos cadastrados
2. Média geral da turma
3. Dados do aluno com maior nota
4. Mensagem confirmando a liberação da memória
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct Aluno
{
    string nome;
    int matricula;
    double nota;
};

int main (){

    int quantidadeAlunos;
    int maiorNota = 0;
    double media = 0;

    cout << "Digite a quantidade de alunos a serem cadastrados: " << endl;
    cin >> quantidadeAlunos;

    Aluno* alunos = new Aluno[quantidadeAlunos];

    for (int i=0;i<quantidadeAlunos;i++){
        cout << "Nome: " << endl;
        cin >> alunos[i].nome;
        cout << "Matricula: " << endl;
        cin >> alunos[i].matricula;
        cout << "Nota: " << endl;
        cin >> alunos[i].nota;
        media += alunos[i].nota;

        if(alunos[i].nota > alunos[maiorNota].nota){
            maiorNota = i;
        }
    }

    media = media/quantidadeAlunos;

    for (int i=0;i<quantidadeAlunos;i++){
        cout << "Nome: " << alunos[i].nome << endl;
        cout << "Matricula: " << alunos[i].matricula << endl;
        cout << "Nota: " << alunos[i].nota << endl;
    }

    cout << fixed << setprecision(2);
    cout << "Média Geral da Turma: " << media << endl;

    cout << "Aluno com maior foi: " << alunos[maiorNota].nome << endl;
    cout << fixed << setprecision(1);
    cout << "Com a nota: " << alunos[maiorNota].nota << endl;

    delete[] alunos;
    cout << "Memória Liberada com sucesso!"<< endl;
    return 0;
}