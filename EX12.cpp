#include <iostream>

using namespace std;

//12. Escreva um algoritmo em C, que leia um conjunto de 50 fichas correspondente à alunos e armazene-as em vetores, cada uma contendo, a altura e o código do sexo de uma pessoa, e calcule e imprima:
    // 1. A maior e a menor altura da turma;
    // 2. As mulheres com altura acima da média da altura das mulheres;
    // 3. As pessoas com altura abaixo da média da turma.

int main (){
    int *altura; //vetor para altura 
    int taman=10;
    altura=new int [taman];

    int *menor = &altura[0]; //descobrir o menor 
    int *maior = &altura[0]; //descobrir o maior 

    for(int i=0; i<taman ; i++){ //informar a altura e comparar entre maior e menor 
        cout<<" informe a altura da pessoa (cm)"<<i+1<<":";
        cin>>altura[i];

        if(altura[i]>*maior){
            maior=&altura[i];
        }
        if(altura[i]<*menor){
            menor=&altura[i];
        }

    }
    cout<<"--- A ---"<<endl;
    cout<<" a menor altura eh: "<<*menor<<endl;
    cout<<" a maior altura eh: "<<*maior<<endl;









    int somaalturamulheres=0;
    int totalmulheres=0;
    int mediamulheres=0;
    int somaalturaalunos=0;
    int mediatotal=0;

    char *sexo;
    sexo= new char [taman];

   

    for (int i=0 ; i<taman; i++){ //informar o sexo da pessoa 
        cout<<" informe o sexo da pessoa (M OU F): ";
        cin>>sexo[i];

        if(sexo[i] == 'F'){  //descobrir a soma das alturas das mulheres mais o total de mulheres para fazer em seguida a media 
            totalmulheres=totalmulheres+1;
            somaalturamulheres=somaalturamulheres+altura[i];
        }
        
    }
    mediamulheres=somaalturamulheres/totalmulheres;
    cout<<"--- B ---"<<endl;

    cout<<" a media das mulheres: "<<mediamulheres<<endl;

    for(int i = 0; i<taman; i++){  //numero de mulheres a cima da media das mulheres 
        if(sexo[i] == 'F' && altura[i]>mediamulheres){
            cout<<" aluno "<<i+1<<":"<< "altura "<<altura[i]<<endl;

        }
    }
    
    cout<<"--- C ---"<<endl;

    for(int i = 0 ; i<taman; i++){ //descobrir a soma total das alturas (masculino e feminino)
        somaalturaalunos=somaalturaalunos+altura[i];

    }
    mediatotal=somaalturaalunos/taman;
    cout<<" a media total: "<<mediatotal<<endl; //media total
    for(int i=0; i<taman; i++){
        if(altura[i]<mediatotal){ //numero de alunos que estao a baixo da media total 
            cout<<" Aluno "<<i+1<<":"<<" altura: "<<altura[i]<<" sexo: "<<sexo[i]<<endl;
        }
    }
    










    return 0; 
}