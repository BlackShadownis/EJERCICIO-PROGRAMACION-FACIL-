#include <iostream>
using namespace std;

int main () {
  float metros, pies;

  cout << "ingrese una cantidad en pies: "; cin >> pies;
  cout << "ingrese una cantidad en metros: "; cin >> metros;

  float suma_Pulgadas, suma_Yardas, suma_Metros, suma_Millas;

  suma_Pulgadas = (metros *  39.37) + (pies *12 );
  suma_Yardas = (metros * 1.094) + (pies *  3);
  suma_Metros = (metros * 1) + (pies * 3.281);
  suma_Millas = (metros / 1609) + (pies / 5280);

  cout << "la suma en pulgadas es: " << suma_Pulgadas << "\n" << "la suma en yardas es: " << suma_Yardas << "\n" << "la suma en metros es: " << suma_Metros << "\n" << "la suma en millas es: " << suma_Millas << "\n";
}