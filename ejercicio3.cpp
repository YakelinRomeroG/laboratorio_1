/*un rpograma que lea  un mes y un dia de dicho mes para luego
 * deir si esa combinacion de mes y di son validos.
 * el caso mas especial es el 29 de febrero,
 * en dicho caso imprimir"posible año bisiesto"
 * el formato de salida debe ser: 14 es un mes invalido.
 * 31/4 es una fecha invalida.
 * 27/4 es una fecha valida.
 * 29/2 es valida en bisiesto.*/

#include<iostream>
using namespace std;

int main(){
    int  mes,dia;

    cout<<"Ingrese el número del mes (1-12): "<<endl; // el usuario ingresa el numero del mes
    cin>> mes;
    cout<< "Ingrese el número del día: " << endl;  // El usuario ingresa el dia de la fecha
    cin>>dia;
    switch (mes) {  //usamos la estructura switch para evaluar el mes y dia ingresados en sus distintos casos.
    case 2: // mes de febrero
            if (dia >= 1 && dia <= 28) {
                cout << dia << "/" << mes << " es una fecha válida." << endl;
            } else if (dia == 29){
                cout << dia << "/" << mes << " es una fechavalida en bisiesto." << endl;
            } else {
                cout << dia << "/" << mes << " es una fecha inválida." << endl;
            }
            break;
    case 4: // mes de abril
            if (dia >= 1 && dia <= 31) {
                cout << dia << "/" << mes << " es una fecha válida." << endl;
            } else {
                cout << dia << "/" << mes << " es una fecha inválida." << endl;
            }
            break;
    case 6:  // mes de junio
            if (dia >= 1 && dia <= 31) {
                cout << dia << "/" << mes << " es una fecha válida." << endl;
            } else {
                cout << dia << "/" << mes << " es una fecha inválida." << endl;
            }
            break;
    case 9:  // mes de septiembre
            if (dia >= 1 && dia <= 31) {
                cout << dia << "/" << mes << " es una fecha válida." << endl;
            } else {
                cout << dia << "/" << mes << " es una fecha inválida." << endl;
            }
            break;
    case 11:  // mes de noviembre
            if (dia >= 1 && dia <= 31) {
                cout << dia << "/" << mes << " es una fecha válida." << endl;
            } else {
                cout << dia << "/" << mes << " es una fecha inválida." << endl;
            }
            break;

    default: // evalua los meses enero,marzo,mayo, julio,agosto,octubre y diciembre.
        if (dia >= 1 && dia <= 31) {
            cout << dia << "/" << mes << " es una fecha válida." << endl;
        } else {
            cout << dia << "/" << mes << " es una fecha inválida." << endl;
        }
        break;

    }
    return 0;
}



