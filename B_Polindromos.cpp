#include <iostream>
using namespace std;
int main() {

    int n;
    cout<< "Cantidad de palabras: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        char palabra[100]; 
        cout<< "Palabra a ingresar: ";
        cin >> palabra;
        
        int longitud = 0;
        while (palabra[longitud] != '\0') { 
            longitud++;
        }
        bool esPalindromo = true;
        for (int j = 0; j < longitud / 2; j++) {
            if (palabra[j] != palabra[longitud - 1 - j]) {
                esPalindromo = false; 
                break; 
            }
        }
        if (esPalindromo) {
            cout << "P" << endl;
        } else {
            cout << "NP" << endl;
        }
    }
    return 0;
}