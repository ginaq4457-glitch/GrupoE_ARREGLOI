#include <iostream> 
using namespace std; 
 
int main() { 
    int numeros[5] = {1, 2, 3, 4, 5};
    cout << "Arreglo invertido:" << endl; 
 
    for(int i = 4; i >= 0; i--) { 
        cout << numeros[i] << endl; 
    } 
 
    return 0; 
}