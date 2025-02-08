#include <iostream>

using namespace std;

void ImprimirNumeros(int *elementos, int n){//lembrar de colocar o tipo de variavel (int, float... etc) 
    cout << "Elementos: ";
    for (int i = n - 1; i >= 0; i--){ // condição para reverter os numeros (n-1) e i precisar ser maior ou igual a 0, pois vai de 5 até 0 (lembrando que vai subtraindo -1)
        cout << elementos[i] << " ";
    }
    cout << endl;
}

int main() {
    int *vetor;
    int taman;
    cout << "Informe o tamanho: ";
    cin >> taman;

    vetor = new int[taman];

    for (int i = 0; i < taman; i++) {
        cout << "Informe o elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    ImprimirNumeros(vetor, taman);

    
    return 0;
}