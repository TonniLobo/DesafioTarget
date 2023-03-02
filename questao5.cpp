#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //cria uma string e recebe o valor pelo usuário
    string palavra;
    cout << "Insira uma string(espacos devem ser substituidos por _ ): " << endl;
    cin >> palavra;

    //verifica o tamanho da string e atribui o valor ao marcador
    int inverter = size(palavra);

    //cria uma string e popula com a mesma palavra inicial para ter o mesmo tamanho
    string inverso = palavra;

    for(int i = 0; i < size(palavra); i++)
    {
        inverter--;
        //utilizando o marcador, passa a primeira letra de palavra para a ultima de inverso enquanto incrementa o laço e decrementa o marcador
        inverso[inverter] = palavra[i];
    }
    //imprime o valor inverso
    cout << inverso << endl;
}
