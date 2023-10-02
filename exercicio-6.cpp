#include <iostream>
using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int tam3 = tam1 + tam2;
    int *vet3 = new int[tam3];
    int i = 0, j = 0, k = 0;
    while(i < tam1 && j < tam2) {
        if(vet1[i] < vet2[j]) vet3[k++] = vet1[i++];
        else vet3[k++] = vet2[j++];
    }
    while(i < tam1) vet3[k++] = vet1[i++];
    while(j < tam2) vet3[k++] = vet2[j++];
    return vet3;
}

int main() {
    int vet1[] = {1, 3, 5};
    int vet2[] = {2, 4, 6};
    int tam1 = 3, tam2 = 3;
    int *vet3 = intercala(vet1, tam1, vet2, tam2);
    int tam3 = tam1 + tam2;
    for(int i = 0; i < tam3; i++) {
        cout << vet3[i] << " ";
    }
    cout << endl;
    delete[] vet3; // Liberar a memória alocada
    return 0;
}
