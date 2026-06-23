#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "--- PROGRAMA DE SECUENCIA INVERSA ---" << endl;
    cout << "Ingrese la cantidad de numeros que desea registrar: ";
    cin >> n;
    int arreglo[50]; 

    cout << "\nPerfecto. Ahora ingrese los " << n << " numeros (puede presionar 'Enter' despues de cada uno):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }
    cout << "\n=====================================" << endl;
    cout << "La secuencia en orden inverso es:" << endl;

    for (int i = n - 1; i >= 0; i--) {
        cout << arreglo[i];
        
        if (i > 0) {
            cout << " ";
        }
    }
    cout << "\n=====================================" << endl;
    cout << "Programa finalizado." << endl;
    
    return 0;
}