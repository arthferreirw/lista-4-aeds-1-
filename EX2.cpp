#include <iostream>

using namespace std;

int main (){
    int Q[20];// um vetor é criado para armazenar 20 inteiros 
   

    for(int i=0; i<20; i++){ // um for é criado para armazenar numeros inteiros (20)
        cout<<" informe o numero "<<i+1<<":";
        cin>>Q[i];
    }
    int *maior=&Q[0]; //Dois ponteiros, maior e menor, são inicializados para apontar para o primeiro elemento do vetor Q (Q[0]).

    int *menor=&Q[0];// o maior e menor valor sao assumidos na posição 1 (posição "0")

    for(int i=1; i<20; i++){
        if(Q[i]>*maior){ //loop inicializa no vetor i e percorre até o ultimo elemento (vetor 19)
            maior=&Q[i]; // para cada elemento do vetor, se I for o maior ele recebe "maior"
        }
        if(Q[i]<*menor){
            menor=&Q[i]; //para cada elemento do vetor, se I for o menor ele recebe "menor"
        }
       
    }
    cout<<" o maior elemento do vetor eh: "<<*maior<<endl; //valor do maior elemento do vetor
        cout<<" o menor elemento do vetor eh: "<<*menor<<endl; //valor do menor elemento do vetor
        cout<<" o endereço do maior elemento eh: "<<maior<<endl; //endereço de memoria do maior numero do vetor
        cout<<" o endereço do menor elemento eh: "<<menor<<endl; // enereço de memeoria do menor numero do vetor 




 return 0;

    }





 
