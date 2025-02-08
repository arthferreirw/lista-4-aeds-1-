#include <iostream>

// Faça uma função que receba uma matriz de números inteiros e retorne a matriz resultante da transposição dela, mas com os elementos pares negativos e os elementos ímpares positivos. Por exemplo, se a matriz original for:

using namespace std;

void PreencherMatriz( int **m , int linhas , int colunas ){
	
	for (int l = 0 ; l < linhas ; l++ ){
		for ( int c = 0; c < colunas; c++ ){
				cout<<" m ["<<l<<"]["<<c<<"]:";
				cin>>m[l][c];
			
			
		}
		
		
	}
	
	cout<<"--------------------------------------------------"<<endl;
	
}

void ImprimirMatriz (int **m, float linhas , float colunas ){
	
		for (int l = 0 ; l < linhas ; l++ ){
			for ( int c = 0; c < colunas; c++ ){
				cout<<m[l][c]<<"\t";
			
			
		}
		
		cout<<endl;
		
	}
	
	
	
	
	
	
}

void ElementosParesNegatiElementosImparesPositi(int **m, int linhas, int colunas) {
    for (int l = 0; l < linhas; l++) {
        for (int c = 0; c < colunas; c++) {
        	
        	
            if (m[l][c] % 2 == 0) { // Se o elemento é par
                m[l][c] = -abs(m[l][c]); // Torna-o negativo
                
            } else { // Se o elemento é ímpar
            
                m[l][c] = abs(m[l][c]); // Torna-o positivo
            }
        }
    }
}

void ImprimirNovaMatrizTransposta ( int **m , int linhas , int colunas, int **matrizTranspost ){
	
	
		// transposição da matriz 
		
		for (int l = 0 ; l < linhas ; l++ ){
			for ( int c = 0; c < colunas; c++ ){
				
				matrizTranspost[c][l] = m[l][c];
				
			
			}
		
		cout<<endl;
		
	}
	
		//modificar elementos da matriz transposta
		
		ElementosParesNegatiElementosImparesPositi(matrizTranspost, linhas, colunas);
	
		//imprimir matriz transposta 
		
		for (int l = 0 ; l < linhas ; l++ ){
			for ( int c = 0; c < colunas; c++ ){ // DIMENSÕES TROCADAS 
				
				cout<<matrizTranspost[l][c]<<"\t";
				
			
			}
		
		cout<<endl;
		
	}
		
	
	
}



int main (){
	
	int **matriz;
	int **matrizTranspost;
	
	int linhas = 0;
	int colunas = 0; 
	
	cout<<" informe o número de linhas da matriz: ";
	cin>>linhas;
	
	cout<<" informe o número de colunas da matriz: ";
	cin>>colunas;
	
	matriz = new int * [linhas]; // matriz normal 
	for (int i = 0 ; i < linhas ; i++ ){
		
			matriz[i] = new int [colunas];
		
		
	}
	
	matrizTranspost = new int *[colunas]; // matriz transposta 
    for (int i = 0; i < colunas; i++) {
        matrizTranspost[i] = new int[linhas];
    }
	
	PreencherMatriz(matriz, linhas, colunas);

    cout << "Matriz Original:" << endl;
    
    ImprimirMatriz(matriz, linhas, colunas);


    cout << "Matriz Modificada e transposta: " << endl;
    ImprimirNovaMatrizTransposta ( matriz , linhas ,  colunas , matrizTranspost);
	
	
	
	
	
	
	
	return 0;
}