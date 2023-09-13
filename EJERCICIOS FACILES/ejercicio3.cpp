#include <iostream>
using namespace std;

int main() {
  int num_Hijos;
  int escola_Hijos;
  float monto_Subsidio;
  string viuda;


  
  cout << "cuantos hijos tienes: "; cin >> num_Hijos;
  cout << "Cuantos hijos tiene escolarizados: "; cin >> escola_Hijos;
  cout << "Es viuda: "; cin >> viuda;

 if (num_Hijos <= 2) {
        monto_Subsidio = 70.00;
    } else if (num_Hijos >= 3 && num_Hijos <= 5) {
        monto_Subsidio = 90.00;
    } else if (num_Hijos >= 6) {
        monto_Subsidio = 120.00;
    }

  if (escola_Hijos) {
    monto_Subsidio += num_Hijos * 10.00;
  }

  if (viuda == "si") {
    monto_Subsidio += 20.00;
  }

cout << "El monto mensual del subsidio familiar es: S/. " << monto_Subsidio << endl;

}
