#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> distancias = {50, 55, 57, 58, 60};
    int t = 174;
    int max_suma = 0;
    vector<int> pueblos_elegidos;

    
    for (int i = 0; i < distancias.size(); i++) {
        for (int j = i + 1; j < distancias.size(); j++) {
            for (int k = j + 1; k < distancias.size(); k++) {
                int suma_actual = distancias[i] + distancias[j] + distancias[k];

                
                if (suma_actual > max_suma && suma_actual <= t) {
                    max_suma = suma_actual;
                    pueblos_elegidos = {distancias[i], distancias[j], distancias[k]};
                }
            }
        }
    }

    cout << "Las distancias elegidas son:";
    for (int distancia : pueblos_elegidos) {
        cout << " " << distancia;
    }
    cout << endl;

    cout << "La suma máxima de distancias es: " << max_suma << " millas" << endl;

    return 0;
}