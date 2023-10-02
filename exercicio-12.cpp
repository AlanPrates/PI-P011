#include <iostream>
using namespace std;

string caracteres_comuns(string A, string B) {
    string resultado;
    for(char a : A) {
        if(B.find(a) != string::npos && resultado.find(a) == string::npos) {
            resultado += a;
        }
    }
    return resultado;
}

int main() {
    string A = "abcdefgh";
    string B = "defijklm";
    string C = caracteres_comuns(A, B);

    cout << "Caracteres Comuns: " << C << endl;

    return 0;
}
