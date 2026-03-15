#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float X1, Y1, X2, Y2, DIS;

    cout << "Ingrese X1: ";
    cin >> X1;

    cout << "Ingrese Y1: ";
    cin >> Y1;

    cout << "Ingrese X2: ";
    cin >> X2;

    cout << "Ingrese Y2: ";
    cin >> Y2;

    DIS = sqrt(pow(X1 - X2, 2) + pow(Y1 - Y2, 2));

    cout << "La distancia entre los puntos es: " << DIS << endl;

    return 0;
}
