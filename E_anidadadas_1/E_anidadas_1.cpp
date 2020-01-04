// E_anidadas_1.cpp : 
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
    alumno alumno1;
    float media=0;
    float dim = sizeof(alumno1.media.nota)/ sizeof(*alumno1.media.nota);


    // introducción de los datos
    cout << "Introduce el nombre del alumno ";
    cin.getline(alumno1.nombre, 20, '\n');

    cout << "Introduce el sexo del alumno ";
    cin.getline(alumno1.sexo, 20, '\n');

    cout << "Introduce la edad alumno ";
    cin>>alumno1.edad;
    limpieza_buffer;

    // pedimos las notas del alumno
    cout << "Introduce las notas de los alumnos" << endl;
    for (int i = 0; i < dim; i++)
    {
        cout << "Nota " << i + 1 << " ";
        cin >> alumno1.media.nota[i];
        media += alumno1.media.nota[i];

    }
    // calculo del promedio
    media = media / dim; 


    // impresion de resultados
    cout << "\nDatos del alumno " << endl;
    cout << "Nombre del alumno " << alumno1.nombre << endl;
    cout << "Sexo del alumno " << alumno1.sexo << endl;
    cout << "Edad del alumno " << alumno1.edad << endl;
    cout.precision(3); // precision de tres cifras siginificativas
    cout << "Promedio de notas del alumno " << media << endl;

          
    // parada para fin de programa
    cout << "\nPulsa una tecla";
    cin.get();
    return 0;
}

