/*Escriba un programa qie imprima el siguente patron
 *         *
 *        ***
 *       *****
 *      *******
 *       *****
 *        ***
 *         *
 * el tamaño del patron estará determinado un número
 * entero impar que ingrese el usuario*/

#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número impar: ";
    cin >> numero;

    // Verificar si es impar
    if (numero % 2 == 0) {
        cout << "El número ingresado no es impar." << endl;
        return 0;
    }
    for (int i = 0; i < numero; ++i) {   // ciclo for para mprimir el patrón
        // Calcular la cantidad de espacios en blanco
        int espacios = abs(numero / 2 - i);
        // Calcular la cantidad de asteriscos
        int asteriscos = numero - 2 * espacios;


        for (int j = 0; j < espacios; ++j) { // ciclo for para mprimir los espacios en blanco del patron
            cout << " ";
        }


        for (int j = 0; j < asteriscos; ++j) { // Imprimir los asteriscos
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
