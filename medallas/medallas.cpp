// medallas.cpp 
// crear una estrcutura con los datos de atletas
// nombre, pais, numero de medallas
// indique el atleta que mas medallas ha conseguido
// guardar los datos en un archivo txt
//

#include <iostream>

using namespace std;

struct atleta
{
    char nombre[20];
    char pais[20];
    int medallas;

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
    
    atleta atletas[100]; // array de atletas
    int n_atletas; // numero de atletas
    int n_medallas_max=0; // numero maximo de atletas
    int id; // identificador del atleta con mayor numero de medallas

    // entrada de numero de atletas
    cout << "Introduce el numero de atletas ";
    cin >> n_atletas;
    limpieza_buffer();


    //introduccion de los datos
    for (int i = 0; i < n_atletas; i++)
    {
        cout << "Nombre del atleta ";
        cin.getline(atletas[i].nombre, 20, '\n');

        cout << "Pais del atleta ";
        cin.getline(atletas[i].pais, 20, '\n');

        cout << "Numero de medallas ";
        cin >> atletas[i].medallas;
        limpieza_buffer();

        if (atletas[i].medallas > n_medallas_max)
        {
            n_medallas_max = atletas[i].medallas;
            id = i;
        }
    }

    // salida de resultados
    cout << "\nEl atleta con mayor numero de medallas  es " << endl;
    cout << "Nombre: "<<atletas[id].nombre << endl;
    cout << "Pais: " << atletas[id].pais << endl;
    cout << "Numero de medallas: " << atletas[id].medallas << endl;


    // parada para fin de programa
    cout << "\nPulsa una tecla";
    cin.get();
    return 0;
}


