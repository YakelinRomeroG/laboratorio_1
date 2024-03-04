/*Escriba un rpograma para leer dos numeros enteros con el siguiente significado:
 * el valor del primer numero representa una hora del dia en un reloj de 24 horas, de modo
 * que 1245 representa las 12:45 de la tarde. el segundo ntero representa
 * un tiempo de duracion de la misma manera, por lo que 345 reprenta tres horas 45 minutos.
 * el programa debe sumar esta duracion, y el resultado sera impreso en la}misma notacion,
 * en este caso 1630, que es el tiempo de 3 horas y 45 minutos despues de 12:45.
 * nota: el formato debe ser: La hora es 1630.
 * otra nota: se debe imprimir un msj como el siguiente cuando los datos ingresados en
 * invalido: 1560 es un tiempo invalido.*/
#include <iostream>

using namespace std;

int main() {
    int hora_1, hora_2;

    cout << "Ingrese la hora #1 (formato 24 horas sin : ) : "; //usuario ingresa la hora
    cin >> hora_1;

    cout << "Ingrese la hora de duración (formato 24 horas sin : ) : "; // usuario ingresa la duracion
    cin >> hora_2;

    // Sumamos las horas
    int total_horas1 = (hora_1 % 100) + (hora_2 % 100);
    int total_horas2 = (hora_1 / 100) + (hora_2 / 100) + (total_horas1 / 60);
    total_horas1 %= 60;

    // Verificar si los datos ingresados son válidos
    if ((hora_1 < 0 || hora_1 >= 2400 || hora_1 % 100 >= 60) || (hora_2 < 0 || hora_2 >= 2400 || hora_2 % 100 >= 60)) {
        cout << " es un tiempo inválido." << endl;
        }
        else{
            cout << "La hora es " << total_horas2 << total_horas1 << "." << endl;
        }
    return 0;
}
