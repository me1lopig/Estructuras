// Estucturas aidadas.cpp
// ejemplo de creacion de estructuras anidadas
//

#include <iostream>

using namespace std;

struct info_direccion // estructura con anidamiento
{
    char direccion[30];
    char provincia[20];
    char ciudad[20];
};

struct empleado
{
    char nombre[20];
    double salario;
    struct info_direccion dir_empleado;
} empleados[2];




int main()
{
    // trabajo con estructuras anidadas

    cout << "\n Trabajo con estructuras anidadas" << endl;

   //empleado empleados[2]; // arreglo de una estructura

    for (int i = 0; i < 2; i++)
    {
        cout << "Registro n " << i + 1 << endl;
        cout << "Introduce el nombre ";
        cin.getline(empleados[i].nombre, 20, '\n');

        cout << "Introduce la direccion ";
        cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');

        cout << "Introduce la ciudad ";
        cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');

        cout << "Introduce la provincia ";
        cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');

        cout << "Introduce el salario ";
        cin >> empleados[i].salario;
        cout << endl;

       // vaciar el buffer del teclado para evitar entradas no deseadas
         cin.ignore();


    }

    // imprimir los resultados

    for (int i = 0; i < 2; i++)
    {
        cout << "\nRegistro n " << i + 1 << endl;

        cout << "nombre " << empleados[i].nombre << endl;

        cout << "direccion " << empleados[i].dir_empleado.direccion << endl;

        cout << "ciudad " << empleados[i].dir_empleado.ciudad << endl;

        cout << "provincia " << empleados[i].dir_empleado.provincia << endl;

        cout << "salario " << empleados[i].salario << endl;

    }


    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}
