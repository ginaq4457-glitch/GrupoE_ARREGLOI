#include <iostream> 
using namespace std; 
 
int main() { 
    int numeros[5] = {5, 2, 9, 1, 7}; 
 
    for(int i = 0; i < 5; i++) { 
        for(int j = i + 1; j < 5; j++) { 
            if(numeros[i] < numeros[j]) { 
                int aux = numeros[i]; 
                numeros[i] = numeros[j]; 
                numeros[j] = aux; 
            } 
        } 
    } 
 
    for(int i = 0; i < 5; i++) { 
        cout << numeros[i] << endl; 
    } 
 
    return 0; 
} 