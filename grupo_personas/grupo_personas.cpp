// grupo_personas.cpp
// se genera un array de personas con indicador de tener o no discapacidad
// y crer dos arrays separando por características
// se usan las constates #define para fijar valores con solo indicar el valor 
//

#include <iostream>

using namespace std;

#define DATOS 20


struct persona
{
    char nombre[DATOS];
    bool tipo;
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
    persona lista[DATOS]; // lista de persona con todas las caracteristicas
    persona lista_sd[DATOS]; // lista de personas sin discapacidad
    persona lista_cd[DATOS]; // lista de personas con discapacidad

    int n_personas; // numero de persona reales que vamos procesar
    int n_sd=0; // numero de personas sin discapacidad
    int n_cd=0; // numero de personas con discapacidad

    cout << "El numero de personas es ";
    cin >> n_personas;

    
    // entrada de los datos y agupamiento de datos 

    for (int i = 0; i < n_personas; i++)
    {
        cout << "Persona n " << i + 1 << endl;

        limpieza_buffer();
        cout << "Nombre ";
        cin.getline(lista[i].nombre, DATOS, '\n');
                     
       // control de entrada de valores sólo 0 o 1
       cout << "Presenta discapacidad [0/1] ";
       cin>>lista[i].tipo;

       // clasificacion de los datos introducidos

       if (lista[i].tipo == 0)
       {
           // se trata de una persona sin discapacidad
           strcpy(lista_sd[i].nombre, lista[i].nombre);
           lista_sd[i].tipo = false;
           n_sd++;
       }
       else
       {
           // se trata de una persona con discapacidad
           strcpy(lista_cd[i].nombre, lista[i].nombre);
           lista_cd[i].tipo = true;
           n_cd++;
       }

    }

    // representacion de los resultados resumidos

    cout << "\n\nResultados " << endl;
    cout << "Numero total de personas " << n_personas << endl;
    cout << "Numero de personas sin discapacidad " << n_sd << endl;
    cout << "Numero de personas con discapacidad " << n_cd << endl;
    cout << endl;


    // impresion de la lista completa
    cout << "Lista completa de personas " << endl;

    for (int i = 0; i < n_personas;i++)
    {
        cout << "numeral " << i + 1 << endl;
        cout << lista[i].nombre << endl;
 
        if (lista[i].tipo == 0)
        {
            cout << "Persona no discapacitada " << endl;
        }
        else
        {
            cout << "Persona discapacitada " << endl;
        }

    }

    // impresion de la lista de personas sin  discapacidad

    cout << "Lista completa de persona sin discapacidad " << endl;

    
    if (n_sd == 0)
    {
        cout << "No hay pesonas sin discapacidad " << endl;
    }
    else
    {
        for (int i = 0; i < n_sd; i++)
        {
            cout << "numeral " << i + 1 << endl;
            cout << lista_sd[i].nombre << endl;
        }
    }
    
 
    // impresion de la lista de personas con discapacidad

    cout << "Lista completa de persona con discapacidad " << endl;

    if (n_cd == 0)
    {
        cout << "No hay pesonas con dicapacidad " << endl;
    }
    else
    {
        for (int i = 0; i < n_cd; i++)
        {
            cout << "numeral " << i + 1 << endl;
            cout << lista_cd[i].nombre << endl;
        }
    }

    // parada para fin de programa
    cout << "\nPulsa una tecla";
    cin.get();
    return 0;
}


