#include <iostream>
#include <string>

using namespace std;

int main() {

    string NOM;
    float PES, LON;
    float PESKIL, LONMET;

    cout << "Ingrese el nombre del dinosaurio: ";
    cin >> NOM;

    cout << "Ingrese el peso en toneladas: ";
    cin >> PES;

    cout << "Ingrese la longitud en pies: ";
    cin >> LON;

    PESKIL = PES * 1000;
    LONMET = LON * 0.3047;

    cout << "Nombre del dinosaurio: " << NOM << endl;
    cout << "Peso en kilogramos: " << PESKIL << endl;
    cout << "Longitud en metros: " << LONMET << endl;

    return 0;
}
