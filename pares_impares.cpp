#include <iostream> 
using namespace std; 
 
int main() { 
    int numeros[5]; 
    int pares = 0, impares = 0; 
 
    for(int i = 0; i < 5; i++) { 
        cout << "Ingrese un numero: "; 
        cin >> numeros[i]; 
 
        if(numeros[i] % 2 == 0) { 
            pares++; 
        } else { 
            impares++; 
        } 
    } 
 
    cout << "Pares: " << pares << endl; 
    cout << "Impares: " << impares << endl; 

    return 0; 
}