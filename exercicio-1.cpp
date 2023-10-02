#include <iostream>
using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    maximo = minimo = vetor[0];
    for(int i = 1; i < n; i++) {
        if(vetor[i] > maximo) maximo = vetor[i];
        if(vetor[i] < minimo) minimo = vetor[i];
    }
}

int main() {
    int vetor[] = {1, 5, 3, 8, 2};
    int max, min;
    int n = sizeof(vetor) / sizeof(vetor[0]);
    maxmin(vetor, n, max, min);
    cout << "Máximo: " << max << ", Mínimo: " << min << endl;
    return 0;
}
