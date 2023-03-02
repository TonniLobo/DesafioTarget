#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //crio um vetor para salvar os valores de Fibonacci
    vector<int> fibon;
    //inicializo os primeiros valores, de forma que eu possa passar pelo laço de repetição sem problemas
    fibon.push_back(0);
    fibon.push_back(1);
    fibon.push_back(1);
    fibon.push_back(2);

    //peço o valor a ser testado para o usuário
    int valorTeste = 0;
    cout << "Digite o valor do teste: " << endl;
    cin >> valorTeste;

    // crio o contador para percorrer o vetor fibon
    int i=0;
    
    do{
        cout << i+1 <<" - Valor escolhido: " << valorTeste << " Fibonacci: " << fibon[i] << endl;
        if(fibon[i]!= valorTeste)
        {
            // se o valor não for igual, o próximo valor será inserido no vetor para testar na próxima repetição
            // até que o valor seja igual ou maior que o inserido pelo usuário.
            if(fibon[i]>=2)fibon[i+1] = fibon[i]+(fibon[i-1]);
            cout << "Nao pertence a sequencia!" << endl;
        }
        else cout << "Pertence a sequencia!" << endl;
        i++;
    }while(fibon[i] <= valorTeste);
}
