// Tiempo_ciclista.cpp 
// calculo del tiempo total en horas, minutos y segundos de las distintas etapas de un ciclista
//

#include <iostream>

using namespace std;

struct tiempo
{
    int horas;
    int minutos;
    int segundos;
};



void limpieza_buffer()
{
    // limpieza del buffer se puede colocar la funcion en lugar de los dos comandos
    // colocarlo despues de una entrada numerica
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}



int main()
{

    tiempo etapas[10]; // almacenamiento de las etapas de un ciclista
    int n_etapas; // numero de etapas a contabilizar

    // variables para la suma de tiempos totales
    int suma_horas=0;
    int suma_minutos=0;
    int suma_segundos=0;

    cout << "Introduce el numero de etapas ";
    cin >> n_etapas;
    limpieza_buffer();

    // entrada de datos de las etapas
    for (int i = 0; i < n_etapas; i++)
    {
        cout << "Etapa n " << i + 1 << endl;

        cout << "Entrada de las horas ";
        cin >> etapas[i].horas;
        suma_horas += etapas[i].horas;

        cout << "Entrada de los minutos ";
        cin >> etapas[i].minutos;
        suma_minutos += etapas[i].minutos;

        cout << "Entrada de los segundos ";
        cin >> etapas[i].segundos;
        suma_segundos += etapas[i].segundos;
    }
    
    // correccion de los valores del tiempo

    if (suma_segundos >= 60)
    {
        suma_minutos+=suma_segundos / 60;
        suma_segundos -= 60*(suma_segundos / 60);
  
    }

  
    if (suma_minutos >= 60)
    {
        suma_horas += suma_minutos / 60;
        suma_minutos -= 60 * (suma_minutos / 60);
    }


    // impresion de resultados
    cout << "\nLos resultados de los tiempos son" << endl;
    cout << "Total de horas " << suma_horas << endl;
    cout << "Total de minutos " << suma_minutos << endl;
    cout << "Total de segundos " << suma_segundos << endl;


    // parada para fin de programa
    cout << "\nPulsa una tecla";
    cin.get();
    return 0;
}



