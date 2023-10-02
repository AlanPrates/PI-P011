#include <iostream>
using namespace std;

void calcula(int &X, int &Y) {
    int tempX = X;
    X = X + Y;
    Y = tempX - Y;
}

int main() {
    int X = 5, Y = 3;
    calcula(X, Y);
    cout << "X: " << X << ", Y: " << Y << endl;
    return 0;
}
