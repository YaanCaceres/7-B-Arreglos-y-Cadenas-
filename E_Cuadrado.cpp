#include <iostream>
using namespace std;
int matriz[50] [50];

int main() {
    int n;
    
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matriz[i][j];
            }
        }
        for (int j = 0; j < n; j++) {
            
            for (int i = n - 1; i >= 0; i--) {
                cout << matriz[i][j];
                
                if (i > 0) {
                    cout << " ";
                }
            }
            cout << "\n"; 
        }
    }
    
    return 0;
}