#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string decimalABinario(int numero) {
    if (numero == 0) return "0";

    string binario = "";
    while (numero > 0) {
        int residuo = numero % 2;
        binario = char(residuo + '0') + binario; // convertir a caracter y agregar al inicio
        numero = numero / 2;
    }
    return binario;
}

int main() {
    ifstream archivoEntrada("datos.txt");  // archivo de entrada
    ofstream archivoSalida("salida.txt");  // archivo de salida

    if (!archivoEntrada) {
        cout << "No se pudo abrir el archivo datos.txt" << endl;
        return 1;
    }

    int numero;
    while (archivoEntrada >> numero) {  // leer cada número del archivo
        string binario = decimalABinario(numero); 
        archivoSalida << binario << endl; // escribir el resultado en salida.txt
    }

    archivoEntrada.close();
    archivoSalida.close();

    cout << "Conversión completada. Revisa el archivo salida.txt" << endl;

    return 0;
}
