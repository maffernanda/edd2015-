#include<cstdlib>
#include<iostream>
#include "funciones.h"

using namespace std;

int main(){
    list lista;
    int dato, opcion = 0, rep=0, busq;
    iniciar(lista);

while (opcion != 4){
    cout<<"Selecciona una opción"<<endl;
    cout<<"1- Ingresar al final"<<endl;
    cout<<"2- Ingresar al principio"<<endl;
    cout<<"3- Buscar e ingresar"<<endl;
    cout<<"4- Salir"<<endl;
    cin>>opcion;

switch (opcion){
    case 1:
        dato = 0;
        while(dato != -1){
        cout<<".-";
        cin>>dato;
        if(dato != -1){
        insertarAlFinal(lista, dato);
        }
        }
        imprimir(lista);
        borrarTodo(lista);
    break;
    case 2:
        dato=0;
        while(dato != -1){
        cout<<".-";
        cin>>dato;
        if(dato != -1){
        insertarAlPrincipio(lista, dato);
        }
        }
        imprimir(lista);
        borrarTodo(lista);
    break;
     case 3:
        dato=0;
        while(dato != -1){
        cout<<".-";
        cin>>dato;
        if(dato != -1){
        insertarAlFinal(lista, dato);
        }
        }
        imprimir(lista);
        cout<<endl;

    do{
    dato =0;
        cout<<"Ingresa numero donde quieres insertar"<<endl;
        cin>>busq;
        cout<<"Ingresa dato a insertar"<<endl;
        cin>>dato;
        busqueda(lista, busq, dato);
        imprimir(lista);
        cout<<"Desea continuar? (Ingresar 1 para terminar)"<<endl;
        cin>>rep;
        }
        while(rep != 1);
        borrarTodo(lista);
    break;
    case 4:
    cout<<"BYE, BYE"<<endl;
    break;
    default:
    cout<<"Intentalo otra vez"<<endl;
    break;
}
}

}
