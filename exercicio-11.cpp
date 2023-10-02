#include <iostream>
using namespace std;

string codifica(string str) {
    for(char &c : str) {
        if(c == 'Z') {
            c = 'A';
        } else if(c == 'z') {
            c = 'a';
        } else if((c >= 'A' && c < 'Z') || (c >= 'a' && c < 'z')) {
            c++;
        }
    }
    return str;
}

string decodifica(string str) {
    for(char &c : str) {
        if(c == 'A') {
            c = 'Z';
        } else if(c == 'a') {
            c = 'z';
        } else if((c > 'A' && c <= 'Z') || (c > 'a' && c <= 'z')) {
            c--;
        }
    }
    return str;
}

int main() {
    string texto = "Estruturas de Dados";
    string texto_codificado = codifica(texto);
    string texto_decodificado = decodifica(texto_codificado);

    cout << "Texto Original: " << texto << endl;
    cout << "Texto Codificado: " << texto_codificado << endl;
    cout << "Texto Decodificado: " << texto_decodificado << endl;

    return 0;
}
