#include <iostream>

using namespace std;
int vasos[50]; 

int main() {
    int n, c;
    cin >> n >> c;
    for (int i = 0; i < c; i++) {
        int vaso_elegido;
        cin >> vaso_elegido;
        vasos[vaso_elegido]++;
    }
    
    for (int i = 1; i <= n; i++) {
        cout << vasos[i] << "\n"; 
    }
    
    return 0;
}