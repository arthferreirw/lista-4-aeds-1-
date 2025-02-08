#include <iostream>

using namespace std;
void PreencherMatriz(int **m, int linhas, int colunas){
    int valores[6][7] = {
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

void ImprimirMatriz(int **m, int linhas, int colunas){
    for(int l = 0; l < linhas ; l++){
        for(int c = 0 ; c < linhas ; c++){
            cout<<m[l][c]<<"\t";
            
            
            
            
            
        }    
        
        cout<<endl;
        
        
        
    }
    
    
    cout<<"---------------------------------------------------------"<<endl;
   
    
}

float TotalDeTerraTerreno(int **m , int linhas,  int colunas){
    float somatoriototal = 0;
    
    
    for(int l = 0; l < linhas ; l++){
        for(int c = 0 ; c < linhas ; c++){
            somatoriototal = somatoriototal + m[l][c];
            
            
            
            
            
        }    
    
    }
    
    cout<<" O total de terra desse terreno eh: "<<somatoriototal<<endl;
    
    
    
    cout<<"---------------------------------------------------------"<<endl;
    
    
    return somatoriototal;
    
}

float CalcularQuantoRetirarTerra(int **m , int linhas , int colunas){
    
    
    
    float somatorioAreaRetirada = 0; 
    
    for(int l = 2; l <= 5 ; l++){ // percorrer a região pintada de laranja
        for(int c = 3; c <= 5 ; c++){
            
            somatorioAreaRetirada = somatorioAreaRetirada + m[l][c];
            
            
            } 
            
            
            
            
        }    
    
    
    
    cout<<" O total de terra da area pintada eh: "<<somatorioAreaRetirada<<endl;
    
    
    
    
    cout<<"---------------------------------------------------------"<<endl;
    
    
    return somatorioAreaRetirada;
    
    
}

void CalcularSubtracao (int **m , int linhas , int colunas ){
    float totalterra = TotalDeTerraTerreno( m ,  linhas,   colunas);
    float arealaranja = CalcularQuantoRetirarTerra( m , linhas ,  colunas);
    
    
    
    
    
    
    cout<<" O total de terra a ser retirado eh: "<<totalterra-arealaranja<<endl;
    
    
    cout<<"---------------------------------------------------------"<<endl;
    
}

void PlanarRegioesPor10(int **m , int linhas , int colunas ){
    for(int l = 2; l <= 5 ; l++){
        for(int c = 3 ; c <= 5 ; c++){
            
            m[l][c] = 10;
            
            
            
            
        } 
    
    
    }

}


void ImprimirMatrizNova(int **m , int linhas , int colunas){
    for(int l = 0; l < linhas ; l++){
        for(int c = 0 ; c < linhas ; c++){
            cout<<m[l][c]<<"\t";
            
            
            
            
            
        }    
        
        cout<<endl;
        
        
        
    }
    
    
    cout<<"---------------------------------------------------------"<<endl;
    
    
}



int main (){
    
    // Definindo as dimensões da matriz
    int linhas = 6;
    int colunas = 7;

    // Criando a matriz dinamicamente
    int** terreno = new int*[linhas];
    for (int i = 0; i < linhas; i++) {
        terreno[i] = new int[colunas];
    }
    

    PreencherMatriz(terreno, linhas,  colunas);
    
    ImprimirMatriz(terreno, linhas, colunas);
    
    CalcularSubtracao (terreno , linhas ,  colunas  ); // area total - area laranja 
    
    PlanarRegioesPor10(terreno,  linhas ,  colunas ); 
    
    ImprimirMatrizNova(terreno ,  linhas ,  colunas);
    
    
    
    
    return 0;
}