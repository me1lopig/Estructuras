// fichero.cpp :
// ejemplo de tratamiento de estructuras 
// se introducen unos datos y se guardan en un archivo de texto 
// se añade un marcador de tiempo cada vez que se modifica el archivo
//

#include <iostream>
#include<fstream> // libreria para manejo de ficheros en C++
# include<ctime>


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
    fstream fichero; // declaracion de la variable fichero
    datos lista[3];
    int n_datos = sizeof(lista) / sizeof(*lista); // dimenzion del array

   
// para el control temporal de la creacion de datos

    time_t rawtime;
    struct tm* timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
   
  

  
    // introduccion de los datos

    fichero.open("archivo.txt", ios::app); // crea un archivo de datos o adiciona si ya existe

    if (!fichero)
    {
        cout << "Se ha producido un error en la creacion del archivo"<<endl;
    }
    else
    {
        fichero << "\nArchivo de datos " << endl;
        fichero<<"Fecha de adicion de los datos "<< asctime(timeinfo)<<endl;
      
        for (int i = 0; i < n_datos; i++)
        {
            fflush(stdin); // Limpieza inicial del buffer

            cout << "Introduce nombre " << i + 1 << " ";
            cin.getline(lista[i].nombre, 20, '\n');
           
            cout << "Introduce la edad ";
            cin >> lista[i].edad;

            // introducimos datos en el archivo
            fichero << "Id: " << i+1 << endl;
            fichero << "Nombre: " << lista[i].nombre << endl;
            fichero << "Edad: " << lista[i].edad << endl;

            // limpieza del buffer
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        }

        fichero.close(); // cierre del archivo
    }
 

    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}


