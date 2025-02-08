#include <iostream> 

using namespace std;

//Faça um algoritmo para ler um vetor de 10 números. Após isto, ler mais um número qualquer, calcular e escrever quantas vezes esse número aparece no vetor.

int main (){
    int *vetor;
    int num;
    cout<<" informe o tamanho do vetor: ";
    cin>>num; // 10 numeros 

    int qualquer=0; // numero qualquer que o usuario precisa informar 

    int contador=0; //contador

    vetor= new int [num];

    cout<<" informe um numero qualquer: ";
    cin>>qualquer;

    for (int i = 0 ; i < num ; i++){ // um for para alimentar o vetor 
        cout<<" informe os numero "<<i+1<<":";
        cin>>vetor[i];
       

        if(qualquer == vetor[i]){ // se o numero informado for igual ao numero do vetor o contador vai funcionando
            contador= contador + 1;
        }

    }
    cout<<"  o numero "<<qualquer<<" aparece "<<contador<< " vezes no vetor "<<endl;  //quantidade de vezes que o numero informado está no vetor 

    return 0;
}