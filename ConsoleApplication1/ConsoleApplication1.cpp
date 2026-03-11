#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class JuegoAdivinar {

private:
    int numeroSecreto;
    int intentos;

public:

    JuegoAdivinar() {
        srand(time(0));
        numeroSecreto = rand() % 100 + 1;
        intentos = 0;
    }

    void jugar() {

        int intento;

        cout << "===== JUEGO: ADIVINA EL NUMERO =====" << endl;
        cout << "Adivina un numero entre 1 y 100" << endl;

        do {

            cout << "Introduce tu numero: ";
            cin >> intento;

            intentos++;

            if (intento > numeroSecreto) {
                cout << "El numero es MENOR" << endl;
            }
            else if (intento < numeroSecreto) {
                cout << "El numero es MAYOR" << endl;
            }

        } while (intento != numeroSecreto);

        cout << endl;
        cout << "FELICIDADES! Adivinaste el numero." << endl;
        cout << "Intentos usados: " << intentos << endl;
    }
};

int main() {

    JuegoAdivinar juego;

    juego.jugar();

    return 0;
}
