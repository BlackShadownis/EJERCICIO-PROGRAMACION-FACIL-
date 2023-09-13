#include <iostream>
using namespace std;

int main() {
    int atleta1_minutos, atleta1_segundos, atleta2_minutos, atleta2_segundos;

    
    cout << "Tiempo del atleta 1 (minutos segundos): ";
    cin >> atleta1_minutos >> atleta1_segundos;

    cout << "Tiempo del atleta 2 (minutos segundos): ";
    cin >> atleta2_minutos >> atleta2_segundos;

   
    int tiempo_total_segundos = (atleta1_minutos * 60 + atleta1_segundos) + (atleta2_minutos * 60 + atleta2_segundos);

 
    int horas = tiempo_total_segundos / 3600;
    int minutos = (tiempo_total_segundos % 3600) / 60;
    int segundos = (tiempo_total_segundos % 3600) % 60;

    cout << "Tiempo total: " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos" << std::endl;

    return 0;
}