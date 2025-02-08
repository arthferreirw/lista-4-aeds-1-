//18. Escreva um algoritmo em C++ que leia um conjunto de 50 fichas de alunos de uma escola e armazene-as em
// vetores. Cada ficha deve conter o nome da criança, a nota final e o código da série (um número de 1 a 3).
// O algoritmo deve calcular e imprimir:
   // 1. A maior e a menor nota da turma.
   //  2. A média das notas de cada série.
   //  3. Os alunos que possuem notas acima da média geral da escola.

#include <iostream>
#include <string.h>
using namespace std; 

float PreencherVetor(int *vetorCod, string *vetorNome, float *vetorNotas, int tam){
    float soma=0;
    

    for(int i=0; i<tam; i++){
        cout<<" informe o nome: ";
        cin>>vetorNome[i];

        cout<<" informe a nota: ";
        cin>>vetorNotas[i];
        soma=soma+vetorNotas[i];
        do{
            cout<<" informe o codigo (1-3): ";
            cin>>vetorCod[i];
            

        }while(vetorCod[i]<=0 || vetorCod[i]>3);

    }

    return soma;

}
void EncontrarMaioreMenorNota(float *vetorNotas, int tam){
    float maior=0.0;
    float menor=999999;

    for(int i=0; i<tam; i++){
        if(vetorNotas[i]>maior){
            maior=vetorNotas[i];
        }
        if(vetorNotas[i]<menor){
            menor=vetorNotas[i];
        }

    }

    cout<<"-------------------------------------------"<<endl;
    cout<<" A maior nota eh: "<<maior<<endl;
    cout<<" A menor nota eh: "<<menor<<endl;
    cout<<"-------------------------------------------"<<endl;


}

    void EncontarNotasAcimaMedia(string *vetorNome, float *vetorNotas, int tam, float soma){
        float media=0;
        media=soma/tam;
        float contador=0;
        for(int i=0; i<tam; i++){
            if(vetorNotas[i]>media){
                cout<<" Os alunos a cima da media: "<<vetorNome[i]<<endl;
                contador++;
            }
            
        }
        cout<<" A  quantidade de alunos a cima da media: "<<contador<<endl;

    }

    void AmediaDasNotasDeCadaSerie(float *vetorNotas, float tam, int *vetorCod){
        float mediaserie=0;
        float somanotas=0;
        float contadorcod1=0.0;
        float contadorcod2=0.0;
        float contadorcod3=0.0;
        float media1=0.0;
        float media2=0.0;
        float media3=0.0;

        

        for(int i=0; i<tam; i++){
            if(vetorCod[i]==1){
                contadorcod1=contadorcod1+1;
                somanotas=somanotas+vetorNotas[i];
                media1=somanotas/contadorcod1;
            }   
            if(vetorCod[i]==2){
                contadorcod2=contadorcod2+1;
                somanotas=somanotas+vetorNotas[i];
                media2=somanotas/contadorcod2;
            }
            if(vetorCod[i]==3){
                contadorcod3=contadorcod3+1;
                somanotas=somanotas+vetorNotas[i];
                media3=somanotas/contadorcod3;
            }


        }
        
      if(contadorcod1>0){
        cout<<" A media da serie 1: "<<media1<<endl;

      }else{
        cout<<"Não possui alunos na serie 1 "<<endl;

      }
    
     if(contadorcod2>0){
        cout<<" A media da serie 2: "<<media2<<endl;
        

      }else{
        cout<<"Não possui alunos na serie 2 "<<endl;
      }
     if(contadorcod3>0){
        cout<<" A media da serie 3: "<<media3<<endl;

      }else{
        cout<<"Não possui alunos na serie 3 "<<endl;
        
      }

    }
    int main(){
        int tam=0;
        cout<<" Informe o numero de alunos: ";
        cin>>tam;

        int *vetorCod=new int [tam];
        string *vetorNome=new string[tam];
        float *vetorNotas= new float [tam];
        float soma=PreencherVetor( vetorCod,  vetorNome,  vetorNotas,  tam);
        EncontrarMaioreMenorNota(vetorNotas,  tam);
        EncontarNotasAcimaMedia(vetorNome, vetorNotas,  tam,  soma);
        AmediaDasNotasDeCadaSerie( vetorNotas, tam, vetorCod);

        return 0;
    }