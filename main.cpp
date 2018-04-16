/*
Programa_8 Area de figuras geometricas
Estructura selectiva doble compuesta
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 10 de febrero de 2015
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int opcion, a, b, c;
    cout << "\t\n **** Area de figuras geometricas ****" << endl;
    cout<<"\n\n 1.- Area rectangulo  ";
    cout<<"\n\n 2.- Area cuadrado    ";
    cout<<"\n\n 3.- salir            ";
    cout<<"\n\n Elige una opcion     ";
    cin>>opcion;

        if (opcion==1)
        {
        system ("cls");
        cout<<endl;
        cout<<"Calculadora del area de un rectangulo"<<endl<<endl;
        cout<<"Base del rectangulo:    ";
        cin>>a;
        cout<<endl;
        cin.ignore();
        cout<<"Altura del rectangulo:  ";
        cin>>b;
        cout<<endl;
        cin.ignore();
        c=a*b;
        cout<<"Area del rectangulo=    ";
        cout<<c;
        cout<<endl<<endl;

        system ("pause");

        }

        else

            if(opcion==2)
        {
        system ("cls");
        cout<<endl;
        cout<<"Calculadora del area de un cuadrado"<<endl<<endl;
        cout<<"Base del cuadrado:    ";
        cin>>a;
        cout<<endl;
        cin.ignore();
        cout<<"Altura del cuadrado:  ";
        cin>>b;
        cout<<endl;
        cin.ignore();
        c=a*b;
        cout<<"Area del cuadrado=    ";
        cout<<c;
        cout<<endl<<endl;

        system ("pause");
        }
    system ("cls");
    system ("pause");
    return 0;
}
