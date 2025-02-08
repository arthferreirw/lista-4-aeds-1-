#include <iostream> 

using namespace std;



void ImprimirValores(int *vet, int n){ //funcao so para imprimir, utilizando parametro por referencia 
    for(int i=0; i<n ; i++){ 
        cout<<vet[i]<<endl; //impressao 
    }


}

int main (){
    
        int *vetor;
        int taman=0;
        cout<<" informe o tamanho do vetor: "; // criando um vetor dinamico 
        cin>>taman;
        vetor = new int [taman];

        

        for (int i = 0; i < taman ; i++ ){
            cout<<" informe os numeros armazenados dentro do vetor: ";
            cin>>vetor[i]; //informar os valores armazenados no vetor 

            while (vetor[i] < 0 || vetor[i] >  50 ){ // while para barrar numeros menores que 0 ou maiores que 50
                cout<<" informe novamente os numeros armazenados (0-50): "; //numeros de 0 até 50 
                cin>>vetor[i];
            }

        }

        ImprimirValores(vetor, taman);




    





    return 0;
}