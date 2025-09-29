#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream archivoEntrada("datos.txt");
    ofstream archivoSalida("salida.txt");

    int numero;
    while (archivoEntrada >> numero) {
        if (numero == 0) {
            archivoSalida << "0" << endl;
            continue;
        }

        string binario = "0";
        while (numero > 0) {
            int residuo = numero % 2;
           binario = char(residuo + '0') + binario;
            numero = numero / 2;
        }
        archivoSalida << binario << endl;
    }

    archivoEntrada.close();
    archivoSalida.close();

    cout << "Conversion completada. muchas gracias por usar mi codigo, att Hanz Alexander" << endl;

    return 0;
}
