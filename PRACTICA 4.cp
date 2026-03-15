#include <iostream>
using namespace std;

int main() {

    float GAL, TOTAL;

    cout << "Ingrese los galones de gasolina surtidos: ";
    cin >> GAL;

    TOTAL = GAL * 3.785 * 8.20;

    cout << "El total a pagar es: " << TOTAL << endl;

    return 0;
}
