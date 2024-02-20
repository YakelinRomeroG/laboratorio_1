#include <iostream>
using namespace std;


int main() {
    char letra;

    // Leer

    cout << "Ingrese un carácter: ";
    cin >> letra;

    // Evaluar

    if ((letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
         letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')) {

        // Verifica si es una vocal,consonante o no es una letra.
            cout << letra << " es una vocal."<<endl;
        }
        else if(letra == 'b' || letra == 'c' || letra == 'd' || letra == 'f' || letra == 'g'||letra == 'h'||
                  letra == 'j' || letra == 'k' || letra == 'l' || letra == 'm' || letra == 'n'||
                  letra == 'p' || letra == 'q' || letra == 'r' || letra == 's' || letra == 't'||
                  letra == 'v' || letra == 'w' || letra == 'x' || letra == 'y' || letra == 'z'||
                  letra == 'B' || letra == 'C' || letra == 'D' || letra == 'F' || letra == 'G'||letra == 'H'||
                  letra == 'J' || letra == 'K' || letra == 'L' || letra == 'M' || letra == 'N'||
                  letra == 'P' || letra == 'Q' || letra == 'R' || letra == 'S' || letra == 'T'||
                  letra == 'V' || letra == 'W' || letra == 'X' || letra == 'Y' || letra == 'Z'){
            cout << letra << " es una consonante."<<endl;
    }
    else{
        cout << "No es una letra."<<endl;
    }
    return 0;
}
