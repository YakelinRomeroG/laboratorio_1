/*Empezando con el número 1 y moviendose hacia la izquierda y en sentido
 *horario se genera una espiral de números como la siguiente:
 *21 22 23 24 25
 *20 07 08 09 10
 *19 06 01 02 11
 *18 05 05 03 12
 *17 16 15 14 13    en el caso de esta espiral 5x5, la suma de los
 *n´´umeros en la diagonal es 101.
 *escriba un programa que escriba un numero impar n y calcule la suma
 *de los numeros en la diagonal de una espiral nxn.
 *nota: la salida del programa debe ser.: es una espiral de 5x5, la suma es: 101.*/


#include <iostream>
#include <vector>

using namespace std;

int main15() {
    int tamano;
    cout << "Ingrese el tamaño de la matriz (el número debe ser impar): ";
    cin >> tamano;

    // Verificar si el tamaño de la matriz
    if (tamano % 2 == 0) {
        cout << "El tamaño de la matriz debe ser un número impar." << endl;
        return 0;
    }

    vector<vector<int>> matriz(tamano, vector<int>(tamano, 0));

    int numero = 1;
    int fila = tamano / 2;
    int columna = tamano / 2;

    matriz[fila][columna] = numero++;

    // Moverse hacia la izquierda, hacia arriba, hacia la derecha y hacia abajo en espiral
    for (int i = 1; i < tamano && numero <= tamano * tamano; i += 2) {
        for (int j = 0; j < i && numero <= tamano * tamano; ++j) matriz[--fila][columna] = numero++;
        for (int j = 0; j < i && numero <= tamano * tamano; ++j) matriz[fila][--columna] = numero++;
        for (int j = 0; j < i + 1 && numero <= tamano * tamano; ++j) matriz[++fila][columna] = numero++;
        for (int j = 0; j < i + 1 && numero <= tamano * tamano; ++j) matriz[fila][++columna] = numero++;
    }

    // Imprimir la matriz
    for (int j = 0; j < tamano; ++j) {
        for (int i = 0; i < tamano; ++i) {
            cout << matriz[i][j] << "|";
        }
        cout << endl;
    }
    // Sumar las diagonales
        int sumaDiagonal1 = 0;
        int sumaDiagonal2 = 0;
        for (int i = 0; i < tamano; ++i) {
            sumaDiagonal1 += matriz[i][i];
            sumaDiagonal2 += matriz[i][tamano -1];
        }

        // Mostrar la suma de las diagonales
        cout << "\nSuma de la diagonal principal: " << sumaDiagonal1 << endl;
        cout << "Suma de la diagonal secundaria: " << sumaDiagonal2 << endl;

    return 0;
}
