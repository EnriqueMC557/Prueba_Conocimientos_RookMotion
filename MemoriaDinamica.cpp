/*Diseña, codifica y comenta el código de una función en C++ que sea
capaz de asignar dinámicamente la memoria a un conjunto de datos de
tipo array que almacene nombres de usuario, reservando y liberando
la memoria para un conjunto de 10 registros.*/

#include <iostream>
#include <string.h>

using namespace std;

void registroNuevo(); //Prototipo de función para registro de usuario nuevo

int main()
{

    //Solicitud de registro de usuario nuevo 10 veces
    for(int i=0; i<10; i++)
    {
        registroNuevo();
    }
    return 0;
}

//Función para generar el registro de usuario nuevo
void registroNuevo()
{
    char temp[30]; //Variable temporal para almacenar nombre de usuario
    char *usuario; //Apuntador para reservar memoria para nombre de usuario
    int sizeUsuario; //Variable para almacenar longitud del nombre de usuario

    cout<<"Ingrese nombre de usuario: ";
    cin.getline(temp,30,'\n'); //Lectura de nombre de usuario
    sizeUsuario = strlen(temp); //Determinación de longitud de nombre de usuario

    usuario = new char[sizeUsuario]; //Asignamos memoria específica para usuario
    strcpy(usuario, temp); //Copia contenido de temporal a usuario (dinámico)
    cout<<usuario<<" tamaño: "<<sizeUsuario<<endl; //Uso del arreglo dinámico
    delete [] usuario; //Libera memoria
}
