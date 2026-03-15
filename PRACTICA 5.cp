#include <iostream>
using namespace std;

int main() {

    float RADIO, ALTU;
    float VOL, ARE;
    float PI = 3.141592;

    cout << "Ingrese el radio del cilindro: ";
    cin >> RADIO;

    cout << "Ingrese la altura del cilindro: ";
    cin >> ALTU;

    VOL = PI * RADIO * RADIO * ALTU;
    ARE = 2 * PI * RADIO * ALTU;

    cout << "El volumen del cilindro es: " << VOL << endl;
    cout << "El area del cilindro es: " << ARE << endl;

    return 0;
}
