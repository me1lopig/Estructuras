// Alumno.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// tratamiento de notas de alumnos
//

#include <iostream>


using namespace std;

struct alumno // definicion de la estructura de datos
{
    char nombre[20];
    int edad;
    float promedio;
};

int main()
{


    alumno alumnos[3];
    int dimen = sizeof(alumnos) / sizeof(*alumnos); // dimension del array
    float promedio = 0; //promedio maximo
    int posicion = 0;


    for (int i = 0; i < dimen; i++)
    {
        fflush(stdin); // limpieza del buffer

        // introduccion de los datos de los alumnos
        cout << "Nombre del alumno ";
        cin.getline(alumnos[i].nombre, 20, '\n');


        cout << "Edad del alumno ";
        cin>>alumnos[i].edad;
        // limpieza del buffer


        cout << "Promedio del alumno ";
        cin>>alumnos[i].promedio;

        if (alumnos[i].promedio > promedio)
        {
            posicion = i;
            promedio = alumnos[i].promedio;
        }

        // limpieza del buffer
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

   
    // impresion de los datos con mejor promedio

    cout << "\nEl alumno con mejor promedio es " << alumnos[posicion].nombre << endl;
    cout << "El alumno con mejor promedio tiene " << alumnos[posicion].edad<<" a"<<char(-92)<<"os" << endl;
    cout << "Su promedio es " << alumnos[posicion].promedio<< endl;


    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}



