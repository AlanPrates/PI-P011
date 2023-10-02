#include <iostream>
#include <vector>
using namespace std;

vector<int> encontra_letras(string str, char letra, int &tamanho_vetor) {
    vector<int> indices;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == letra) {
            indices.push_back(i);
        }
    }
    tamanho_vetor = indices.size();
    return indices;
}

int main() {
    string str = "exemplo de string";
    char letra = 'e';
    int tamanho;
    vector<int> indices = encontra_letras(str, letra, tamanho);
    cout << "Letra encontrada nas posições: ";
    for(int i = 0; i < tamanho; i++) {
        cout << indices[i] << " ";
    }
    cout << endl;
    return 0;
}
