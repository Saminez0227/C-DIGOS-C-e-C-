#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;
    cout << "Digite as tres medidas: ";
    cin >> A >> B >> C;

    double quadrado = pow(A, 2);
    double triangulo = (A * B) / 2.0;
    double trapezio = ((A + B) * C) / 2.0;

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << quadrado << endl;
    cout << "AREA DO TRIANGULO = " << triangulo << endl;
    cout << "AREA DO TRAPEZIO = " << trapezio << endl;
    return 0;
}
