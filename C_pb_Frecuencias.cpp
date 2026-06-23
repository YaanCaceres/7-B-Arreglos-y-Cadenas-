#include <iostream>

using namespace std;

int main() {
    int P, n;
    cin >> P >> n;
    
    int votos[50] = {0}; 
    
    for (int i = 0; i < n; i++) {
        int profesor_elegido;
        cin >> profesor_elegido;
        votos[profesor_elegido]++; 
    }
    for (int i = 1; i <= P; i++) {
        cout << i << "-" << votos[i] << endl;
    }
    
    return 0;
}