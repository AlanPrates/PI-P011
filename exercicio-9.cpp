#include <iostream>
using namespace std;

float calc_serie(int N) {
    float S = 0.0;
    for(int i = 1; i <= N; i++) {
        S += 1.0 / i;
    }
    return S;
}

int main() {
    int N = 5; // Exemplo com N = 5
    float resultado = calc_serie(N);
    cout << "Resultado para N = " << N << ": " << resultado << endl;
    return 0;
}
