// E_Anidadas_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>

using namespace std;

struct promedio
{
    // notas de un alumno
    // las almacenamos en un array
    float nota[3];
};


struct alumno
{
    char nombre[20];
    char sexo[10];
    int edad;
    struct promedio media; // variable tipo struct dentro de otro struct
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
    alumno alumno1[20];
    float media[3] = { 0,0,0 }; // vector de pronedios
    int n_alumnos;
    float media_mayor=0; // mayor valor
    int id; // indice del mayor valor 

    // introduce el numero de alumnos
    cout << "Introduce el numero de alumnos ";
    cin >> n_alumnos;
    limpieza_buffer();


    for (int i = 0; i < n_alumnos; i++)
    {
        // introducción de los datos
  

        cout << "Introduce el nombre del alumno "<<i+1<<" ";
        cin.getline(alumno1[i].nombre, 20, '\n');

        cout << "Introduce el sexo del alumno ";
        cin.getline(alumno1[i].sexo, 20, '\n');

        cout << "Introduce la edad alumno ";
        cin >> alumno1[i].edad;
        limpieza_buffer();
 

        // pedimos las notas del alumno
        cout << "Introduce las notas de los alumnos" << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Nota " << i + 1 << " ";
            cin >> alumno1[i].media[j].nota[j];
            media[i] += alumno1[i].media[j].nota[j];

        }
        // calculo del promedio
        media[i] = media[i] / 3;

        if (media[i] > media_mayor)
        {
            // obtencion de la mayor media
            media_mayor = media[i];
            id = i; // valor del id correspondente
        }

    }

    
    // impresion de resultados
    cout << "\nDatos del alumno " << endl;
    cout << "Nombre del alumno " << alumno1[id].nombre << endl;
    cout << "Sexo del alumno " << alumno1[id].sexo << endl;
    cout << "Edad del alumno " << alumno1[id].edad << endl;
    cout.precision(3); // precision de tres cifras siginificativas
    /cout << "Promedio de notas del alumno " << media_mayor << endl;


    // parada para fin de programa
    cout << "\nPulsa una tecla";
    cin.get();
    return 0;
}
