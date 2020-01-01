// Lista_empleados.cpp 
// se crea una estructura 
// de una lista de empleados seleccionar el que tiene menor y mayor salario
// por lo que veo solo hay que limpiar el buffer despues de entrada numerica
//

#include <iostream>

using namespace std;

struct empleado
{
    char nombre[20];
    float salario;

};

void limpieza_buffer()
{
    // limpieza del buffer se puede colocar la funcion en lugar de los dos comandos
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}



int main()
{
    int n_empleados=0;
    empleado empleados[50]; // arreglo de empleados
    // marcadores para el mayor y menor sueldo
    int id_mayor = 0;
    float mayor = 0;
    int id_menor = 0;
    float menor = 9999999; // el salario minimo es no cobrar

    // introduccion de los datos del arreglo 
    // se controla que sean mas de 0
    

    do
    {
        cout << "Indicar el numero de empleados ";
        cin >> n_empleados;
        // limpieza del buffer despues de entrada numerica
        limpieza_buffer();

    } while (n_empleados <= 0);

  // introduccion de los datos 

    for (int i = 0; i < n_empleados;i++)
    {
        cout <<"Empleado "<< i + 1 << endl;
        cout << "introduce el nombre ";
        cin.getline(empleados[i].nombre,20,'\n');
                        
        cout << "Introduce el salario ";
        cin >> empleados[i].salario;
        // limpieza del buffer
        limpieza_buffer();

        // salario mayor
        if (empleados[i].salario > mayor)
        {
            mayor = empleados[i].salario;
            id_mayor = i;
        }

       // salario menor
        if (empleados[i].salario < menor)
        {
            menor = empleados[i].salario;
            id_menor = i;
        }

    }

    // salida de resultados
    cout << "\nEl empleado mejor pagado es " << empleados[id_mayor].nombre << endl;
    cout<<"con un sueldo de " << empleados[id_mayor].salario << endl; // 

    cout << "El empleado peor pagado es " << empleados[id_menor].nombre << endl;
    cout<< "con un sueldo de " << empleados[id_menor].salario << endl;


    // parada para fin de programa
    cout << "Pulsa una tecla";
    cin.get();
    return 0;
}


