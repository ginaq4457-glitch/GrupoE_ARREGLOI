#include <iostream>
using namespace std;

int main() {
    const int N = 5;

    string opciones[3] = {"Java", "C++", "Python"};
    int votos[3] = {0, 0, 0};
    int eleccion;

    cout << "El siguiente programa determina el lenguaje de programacion mas votado.\n";
    cout << "=========== BIENVENIDO A LA ENCUESTA ===========" << endl;
    cout << "1. Java\n2. C++\n3. Python\n";

    for(int i = 0; i < N; i++) {
        cout << "\nPersona " << i+1 << ", elige una opcion (1-3): ";
        cin >> eleccion;

        if(eleccion >= 1 && eleccion <= 3) {
            votos[eleccion - 1]++;
        } else {
            cout << "Opcion invalida, intenta nuevamente.\n";
            i--;
        }
    }

    cout << "\n--- RESULTADOS ---\n";
    for(int i = 0; i < 3; i++) {
        cout << opciones[i] << ": " << votos[i] << " votos\n";
    }

    int maxVotos = votos[0];
    int pos = 0;

    for(int i = 1; i < 3; i++) {
        if(votos[i] > maxVotos) {
            maxVotos = votos[i];
            pos = i;
        }
    }

    cout << "\nLenguaje ganador: " << opciones[pos] << endl;

    return 0;
}
