// Estucturas.cpp 
// ejemplo de creacion de estructuras
//

#include <iostream>

using namespace std;

// generamos la estructura simple


struct persona
{
    char nombre[20];
    int edad;
 };


// declaracion de variables y asignacion de valores
persona persona_1 = { "Antonio",18 };
persona persona_2 ;



int main()
{
 
    // caso de una estructura sencilla

    // impresion de datos de la primera variable
    cout << "Primera persona nombre" << endl;
    cout<< persona_1.nombre << endl;
    cout<<"edad " << persona_1.edad << endl;

    // introduccion de datos de la segunda variable
    cout << "Introducimos los datos de la segunda variable " << endl;
    cout << "Introduce el nombre ";
    cin.getline(persona_2.nombre, 20, '\n');
    cout << "Introduce la edad ";
    cin>>persona_2.edad;

    // impresion de datos de la segunda variable
    cout << "Segunda persona nombre " << persona_2.nombre << endl;
    cout <<"edad " << persona_2.edad << endl;


    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}


