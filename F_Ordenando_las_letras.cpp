#include <iostream>

using namespace std;

int main() {
    char linea[100];
    cin.getline(linea, 100);
    int letras[26] = {0};
    int i = 0;

    while (linea[i] != '\0') {

        if (linea[i] >= 'a' && linea[i] <= 'z') {
            letras[linea[i] - 'a']++; 
        }
        i++;
    }
    
    i = 0;
    int caracter_actual = 0; 
    
    while (linea[i] != '\0') {

        if (linea[i] >= 'a' && linea[i] <= 'z') {
            while (letras[caracter_actual] == 0) {
                caracter_actual++;
            }
            linea[i] = caracter_actual + 'a';
            
            letras[caracter_actual]--;
        }
        i++; 
    }
    cout << linea << "\n"; 
    return 0;
}
