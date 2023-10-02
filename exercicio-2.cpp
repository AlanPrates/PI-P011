#include <iostream>
using namespace std;

void ordena(float &a, float &b, float &c, float &d) {
    float temp;
    if(a > b) { temp = a; a = b; b = temp; }
    if(b > c) { temp = b; b = c; c = temp; }
    if(c > d) { temp = c; c = d; d = temp; }
}

int main() {
    float a = 4.5, b = 2.1, c = 7.3, d = 1.8;
    ordena(a, b, c, d);
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}
