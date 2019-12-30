// fichero.cpp :
// ejemplo de tratamiento de estructuras 
// se introducen unos datos y se guardan en un archivo de texto 
//

#include <iostream>

using namespace std;

// generacion de la estructura
struct datos
{
    char nombre[20];
    int edad;

};


int main()
{
    // declaracion de la variable de datos
    datos lista[3];
    int n_datos = sizeof(lista) / sizeof(*lista); // dimenzion del array

    // introduccion de los datos

    for (int i = 0; i < n_datos; i++)
    {
        fflush(stdin); // Limpieza inicial del buffer

        cout << "Introduce nombre "<<i+1<<" ";
        cin.getline(lista[i].nombre, 20, '\n');

        
        cout << "Introduce la edad " ;
        cin >> lista[i].edad;

        // limpieza del buffer
       cin.clear();
       cin.ignore(numeric_limits<streamsize>::max(), '\n');
       
    }



    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}


