// Corredor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<conio.h>

using namespace std;

struct corredor
{
    char nombre[20];
    int edad;
    char sexo[2];
    char club[20];
};



int main()
{
    corredor grupo[3]; // generamos un array de  corredores
    int dimen = sizeof(grupo) / sizeof(*grupo); // dimension del array


    for (int i = 0; i < dimen;i++)
    {
        
        cout << "Introduce datos del corredor " << i + 1 << endl;
        
        cout << "Nombre del corredor " << i + 1 << " es ";
        cin.getline(grupo[i].nombre, 20, '\n');
    

        cout << "Edad del corredor " << i + 1 << " es ";
        cin >> grupo[i].edad;

       // limpieza del buffer
        cin.clear(); // unset failbit
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Sexo del corredor " << i + 1 << " es [m/f] ";
        cin.getline(grupo[i].sexo, 2, '\n');
   
        cout << "Club del corredor " << i + 1 << " es ";
        cin.getline(grupo[i].club, 20, '\n');  
     }

    // impresion del listado y agrupacion por categoría


    cout << "Pulsa una tecla para continuar " << endl;
    cin.get();
    system("cls||clear"); //limpiamos la pantalla
    
    for (int i = 0; i < sizeof(grupo) / sizeof(*grupo); i++)
    {
        cout << "Datos de los corredores " << i + 1 << endl;

        cout << "Nombre del corredor " << i + 1 << " es " << grupo[i].nombre << endl;

        cout << "Edad del corredor " << i + 1 << " es "<<grupo[i].edad<<endl;

        if (grupo[i].edad<=18) cout << "Categoria del corredor " << i + 1 << " es " << "Juvenil"<< endl;
        if ((grupo[i].edad > 18)&&(grupo[i].edad<=40)) cout << "Categoria del corredor " << i + 1 << " es " << "Senior" << endl;
        if (grupo[i].edad > 40) cout << "Categoria del corredor " << i + 1 << " es " << "Veterano" << endl;

        cout << "Sexo del corredor " << i + 1 << " es "<<grupo[i].sexo<<endl;

        cout << "Club del corredor " << i + 1 << " es "<<grupo[i].club << endl;    
      }


    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}

