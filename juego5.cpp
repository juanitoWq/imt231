#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "*" << endl;
    cout << "Bienvenido al juego de la adivinanza!" << endl;
    cout << "Ingrese un numero en el rango: 1 a 100*" << endl;
    cout << "*" << endl;

    cout << endl;
    cout << "Escoja el nivel de dificultad" << endl;
    cout << "Facil (F), Medio (M) o Dificil (D)" << endl;

    char dificultad;
    cin >> dificultad;

    int numero_tentativas = 0;
    if (dificultad == 'F') {
        numero_tentativas = 15;
    }
    
    if (dificultad == 'M') {
        numero_tentativas = 10;
    }
    
    if (dificultad == 'D') {
        numero_tentativas = 5;
    }

    // Inicializar la semilla para generar números aleatorios
    srand(time(0));
    const int NUMERO_SECRETO = 1 + rand() % 100; // Generar un número aleatorio entre 1 y 100
    cout << "Numero secreto aleatorio entre 1 y 100: " << NUMERO_SECRETO << endl;

    int adivina;
    double puntos = 1000.0; // Puntos iniciales

    for (int intentos = 1; intentos <= numero_tentativas; intentos++) {
        cout << "Tentativa " << intentos << endl;
        cout << "¿Cuál es el número? ";
        cin >> adivina;
        double puntos_perdidos = abs(adivina - NUMERO_SECRETO) / 2.0;
        puntos -= puntos_perdidos;

        cout << "El valor de su número es: " << adivina << endl;

        if (adivina == NUMERO_SECRETO) {
            cout << "¡Felicitaciones! Adivinaste el número secreto." << endl;
            break;
        }

        if (adivina > NUMERO_SECRETO) {
            cout << "El número ingresado es mayor que el número secreto." << endl;
        }

        if (adivina < NUMERO_SECRETO) {
            cout << "El número ingresado es menor que el número secreto." << endl;
        }

        if (intentos == numero_tentativas) {
            cout << "Se acabaron las tentativas. El número secreto era: " << NUMERO_SECRETO << endl;
        }
    }

    cout << "Finalizó el juego" << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Su puntuación fue de " << puntos << " puntos" << endl;

    return 0;
}
