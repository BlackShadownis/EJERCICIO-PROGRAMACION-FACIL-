#include <iostream>
using namespace std;

int main() {

  cout << "calculadora" << "\n";
  
  float num1, num2;
  float resultado;
  char operacion;

  cout << "ingresa num1: "; cin >> num1;
  cout << "ingresa num2: "; cin >> num2;
  cout << "\n";

  cout << "que operacion vas a hacer? "<< "\n" << "a. sumar"  << "\n" << "b. restar" << "\n" "c. multiplicar"  << "\n" << "d. dividir" << "\n";

  cout << "escribe la letra de la operacion: "; cin >> operacion;

switch (operacion) {
        case 'a':
            resultado = num1 + num2;
            break;
        case 'b':
            resultado = num1 - num2;
            break;
        case 'c':
            resultado = num1 * num2;
            break;
        case 'd':
            resultado = num1 / num2;
            break;
    }
cout << "El resultado es: " << resultado << endl;

}