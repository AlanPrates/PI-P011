#include <iostream>
using namespace std;

int insere_meio(int vetor[], int &qtde, int elemento) {
    int meio = qtde / 2;
    for(int i = qtde; i > meio; i--) {
        vetor[i] = vetor[i-1];
    }
    vetor[meio] = elemento;
    qtde++;
    return qtde;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6};
    int qtde = 6;
    insere_meio(vetor, qtde, 100);
    for(int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    return 0;
}
