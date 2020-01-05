// E_Anidadas_2.cpp 
// ejemplo de estructura anidada
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
    float promedio[3] = { 0,0,0 }; // vector de pronedios
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
            cout << "Nota " << j + 1 << " ";
            cin >> alumno1[i].media.nota[j];
            promedio[i] += alumno1[i].media.nota[j];
            
        }
        limpieza_buffer();
        // calculo del promedio
        promedio[i] = promedio[i] / 3;

        if (promedio[i] > media_mayor)
        {
            // obtencion de la mayor media
            media_mayor = promedio[i];
            id = i; // valor del id correspondente
        }
    }

    
    // impresion de resultados
    cout << "\nDatos del alumno con mejor promedio " << endl;
    cout << "Nombre del alumno " << alumno1[id].nombre << endl;
    cout << "Sexo del alumno " << alumno1[id].sexo << endl;
    cout << "Edad del alumno " << alumno1[id].edad << endl;
    cout.precision(3); // precision de tres cifras siginificativas
    cout << "Promedio de notas del alumno " << media_mayor << endl;


    // parada para fin de programa
    cout << "\nPulsa una tecla";
    cin.get();
    return 0;
}

