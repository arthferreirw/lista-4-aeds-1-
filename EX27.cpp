#include <iostream>

using namespace std;

//1. aça uma função que determine a coluna que possui o maior somatório.
//2. Faça uma função que determine a linha de maior somatório. 
//3. Faça uma função que percorra a matriz e quando ele encontrar um valor maior que 10,
// ele troque pelo valor 10.

void PreencherMatriz(int **m , int linhas , int colunas ){
      int valores[6][6] = {
        {1, 3, 3, 5, 6, 7},
        {2, 1, 2, 5, 7, 9},
        {2, 4, 5, 9, 2, 15},
        {5, 8, 8, 2, 13, 12},
        {5, 6, 5, 8, 14, 16},
        {5, 5, 7, 12, 14, 15}
    };

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            m[i][j] = valores[i][j];
        }
    }



}



void ImprimirMatriz(int ** m , int linhas , int colunas){
    for (int i = 0 ; i < linhas ; i++){
        for( int j = 0; j < colunas ; j++){
            cout<<m[i][j]<<"\t";

        }
        cout<<endl;
    }
   

    cout<<"----------------------------------------------------------------"<<endl;
}


void VerificarColunaMaiorSomatorio( int ** m , int linhas , int colunas){
    int maior = 0;
    int coluna = 0;

    for(int j = 0; j < colunas ; j++){

        int somatoriocoluna = 0;

        for(int i = 0 ; i < linhas ;  i++){
            somatoriocoluna = somatoriocoluna + m[i][j];

            if( somatoriocoluna > maior ){
                maior = somatoriocoluna;
                coluna = j; 
            }

        }

    }
    cout<<" A coluna que possui maior somatorio: "<< coluna + 1 <<endl;
    cout<<" A soma dos valores da coluna eh: "<<maior<<endl;
  




}

void VerificarLinhaMaiorSomatorio (int ** m , int linhas , int colunas ){
    int maior=0;
    int linha=0;


    for( int j = 0; j < linhas ; j++){

        int somatoriolinhas = 0; 

        for( int i = 0 ;  i < colunas; i++){

            somatoriolinhas = somatoriolinhas + m[j][i];

            if (somatoriolinhas > maior){
                maior = somatoriolinhas;
                linha = i;
               
            }
        }

  
    }
    
    cout<<" A linha com o maior somatorio eh: "<< linha + 1 <<endl;
    cout<<" A soma dos valores da linha eh: "<<maior<<endl;

   

}
void PercorrerMatrizSubstituirPor10(int **m, int linhas, int colunas){
    for(int i = 0; i < linhas ; i++){

        for (int j = 0; j < colunas ; j++){

            if( m[i][j] < 10 ){

                m[i][j] = 10;

                

            }
        }
        

    }

    // imprimindo a matriz 

    for(int i = 0; i < linhas ; i++){

        for (int j = 0; j < colunas ; j++){
                
            cout<<m[i][j]<<"\t";
           
        }
    
    cout<<endl;

    }

    
}


int main (){

    int linhas = 6;
    int colunas = 6;

    // Criando a matriz dinamicamente
    int** terreno = new int*[linhas];
    for (int i = 0; i < linhas; i++) {
        terreno[i] = new int[colunas];
    }

    PreencherMatriz(terreno , linhas , colunas ); // matriz preenchida 

    ImprimirMatriz( terreno , linhas , colunas); // imprimir a matriz 

    VerificarColunaMaiorSomatorio( terreno ,  linhas , colunas); 

    VerificarLinhaMaiorSomatorio (terreno , linhas ,  colunas);

    PercorrerMatrizSubstituirPor10(terreno,  linhas,  colunas);







    return 0;
}