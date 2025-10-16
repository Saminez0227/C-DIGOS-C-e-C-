#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char escala;
    double temp;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    cout << "Digite a temperatura: ";
    cin >> temp;

    cout << fixed << setprecision(2);

    if (escala == 'F' || escala == 'f') {
        double c = 5.0 / 9.0 * (temp - 32);
        cout << "Temperatura equivalente em Celsius: " << c << endl;
    } else {
        double f = 9.0 / 5.0 * temp + 32;
        cout << "Temperatura equivalente em Fahrenheit: " << f << endl;
    }

    return 0;
}
