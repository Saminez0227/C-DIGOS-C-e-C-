#include <iostream>
#include <string>
#include <climmits>
#include <iomanip>
using namespace std;

int main()
{

    string nome1,nome2;
    int idade1,idade2;
    double salario1,salario2
    char genero1,genero2

    cout << "Nome do primeiro funcionario: "<< endl;
    getline(cin, nome1);
    cout << "Idade de "<< nome1 << endl;
    cin >> idade1;
    cout << "Salario de "<< nome1 << endl;
    cin >> salario1;
    cout << "Genero de "<< nome1 << endl;
    cin >> genero1;
    cout << "Nome do segundo funcionario: "<< endl;
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Idade de "<< nome2 << endl;
    cin >> idade2;
    cout << "Salario de "<< nome2 << endl;
    cin >> salario2;
    cout << "Genero de "<< nome2 << endl;
    cin >> genero2;
    cout << fixed << setprecision(2);
    cout <<"O funcionario " << nome1 << " do genero " << genero1
    cout <<"O funcionario " << nome2 << " do genero " << genero2
    return 0;
    
}