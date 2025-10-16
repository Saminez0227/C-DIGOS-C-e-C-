#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nota1, nota2;
    cout << "Digite as duas notas: ";
    cin >> nota1 >> nota2;

    double final = (nota1 + nota2) / 2.0;
    cout << fixed << setprecision(1);
    cout << "Nota final = " << final << endl;

    if (final < 60.0)
        cout << "REPROVADO" << endl;

    return 0;
}
