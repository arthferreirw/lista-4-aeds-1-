#include <iostream>

using namespace std;

void PreencherVetor(int taman, float *vetNotas){
    for(int i=0; i<taman; i++){
        do{
        cout<<" informe a nota do aluno "<<i+1<<":";
        cin>>vetNotas[i];
        }while(vetNotas[i]<0 || vetNotas[i]>10);

    }

}
void EncontrarAfrequenciaAbsolutaeRelativa(int taman, float *vetNotas){
    float contador;
    for(int j=0; j<=10; j++){
       
        contador=0; // contar quantas vezes a nota aparece no vetor 
       

       for (int i=0 ; i<taman; i++){
        if(vetNotas[i]==j){
            contador++;
        
        } 
        
       }
    }   

    
    cout<<"----------------Frenquencia absoluta----------------"<<endl;
    cout<<" O numero de vezes que a nota "<<*vetNotas<<" aparece no conjunto: "<<contador<<endl;
    cout<<"------------------------------------------------------------------"<<endl;

     cout<<"----------------Frenquencia Relativa----------------"<<endl;
    cout<<" A frequencia relativa eh: "<<contador/taman<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    
        
}

    



int main (){
    int taman=0;
    cout<<" informe quantos alunos fizeram a prova: "; //80;
    cin>>taman;

    float *vetNotas=new float[taman];
    
    

    PreencherVetor( taman,vetNotas);
    EncontrarAfrequenciaAbsolutaeRelativa( taman, vetNotas);
    











    return 0;
}






