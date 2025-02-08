/*16. Escreva um algoritmo em C++ que leia um conjunto de 50 fichas de funcionários de uma empresa e armazene-as em vetores.
Cada ficha deve conter o nome, o salário e o código do setor (um número de 1 a 5). O algoritmo deve calcular e imprimir:
    1. O maior e o menor salário da empresa.
    2. A média salarial de cada setor.
    3. Os funcionários com salários abaixo da média salarial da empresa.*/
    
    #include <iostream>
    #include <string.h>

    using namespace std;
    
    
    void preencherVetor(float *vetorSalario, int tamanho, int *vetorCod, string *vetorNome){
        
        for(int i = 0; i < tamanho; i++){
            
            cout << "Digite o seu nome: ";
            cin >> vetorNome[i];
            
            cout << "Digite o valor do seu salario: "; 
            cin >> vetorSalario[i];
            
            do{
                
                cout << "Digite o codigo do seu setor: ";
                cin >> vetorCod[i];
            
            }while(vetorCod[i] > 5);
            
        }
    
    }
    
    void mediaSalariaPorSetor(float *vetorSalario, int tamanho, int *vetorCod){
        
        int set = 0;
        float media = 0.0;
        int contador = 0;
        
        do{
            
            cout << "Qual setor deseja calcular: ";
            cin >> set;
            
        }while(set > 5);
        
        for (int i = 0; i < tamanho; i++){
            
            if (vetorCod[i] == set){
                
                media = media + vetorSalario[i];
                
                contador++;
            }
    
        }
        
        media = media / contador;
        
        cout << "A media salarial do setor " << set << " e: " << media << endl;
        
    }
    
    void mediaSalarialEmpresa(float *vetorSalario, int tamanho, string *vetorNome){
        
    float media = 0.0;
    int contador = 0;
    
        for (int i = 0; i < tamanho; i++){
            
            media = media + vetorSalario[i];
            
        }
    
    media = media / tamanho;    
    
    cout << "A media de salario da empresa e: " << media << endl;
    cout << "Pessoas com salario abaixo da media: " << endl;
    cout << "-----------------------------------" << endl;    
    
        for (int i = 0; i < tamanho; i++){
            
            if(vetorSalario[i] < media){
                    
                cout << vetorNome[i] << endl;    
                
                contador++;
            }
    
        }
    cout << "-----------------------------------" << endl;    
    cout << "numero de pessoas com salario abaixo da media: " << contador << endl;
    cout << "-----------------------------------" << endl;    
         
    }
    
    void calculaMenorMaior(float *vetorSalario, int tamanho){
        
    int maior = 0;
    int menor = 9999999;
        
        for(int i = 0; i < tamanho; i++){
            
            if (vetorSalario[i] > maior){
                
                maior = vetorSalario[i];
        
            }
            if (vetorSalario[i] < menor){
                
                menor = vetorSalario[i];
        
            }
    
        }        
        
    cout << "O maior salario e: " << maior << endl;
    cout << "O menor salario e: " << menor << endl;
    cout << "-----------------------------------" << endl;    
        
    }

    
int main(){
    
    int tamanho = 0;
    
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    
    int *vetorCod = new int[tamanho];
    string *vetorNome = new string[tamanho];
    float *vetorSalario = new float[tamanho];
    
    preencherVetor(vetorSalario, tamanho, vetorCod, vetorNome);
    
    calculaMenorMaior(vetorSalario, tamanho);
    
    mediaSalarialEmpresa(vetorSalario, tamanho, vetorNome);
    
    mediaSalariaPorSetor(vetorSalario, tamanho, vetorCod);
    

return 0;
}