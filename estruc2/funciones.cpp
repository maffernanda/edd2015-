#include <cstdlib>
#include <iostream>
#include "funciones.h"

using namespace std;

void iniciar (list &lista){
    lista.inicio =NULL;
    lista.capacidad =0;

}
Nodo *Nodonuevo(int dato){
    Nodo *nuevo = new Nodo;
    nuevo->dato = dato;
    nuevo->next = NULL;
    return nuevo;
}
bool vacia (list &lista){
    if(lista.capacidad==0)
        return true;
    else return false;
    }

    bool insertarAlPrincipio(list &lista, int dato){
        Nodo *p, *q, *auxiliar;
        p=lista.inicio;

        if(vacia(lista))
        {
         lista.inicio =Nodonuevo(dato);
            lista.capacidad++;
            }
        else{
        auxiliar = Nodonuevo(dato);
        lista.inicio = auxiliar;
        auxiliar->next = p;
        lista.capacidad++;
        }
    }

void imprimir(list &lista){
    Nodo *p=lista.inicio;
    while (p != NULL){
        cout<<p->dato<<" ";
        p=p->next;
    }
}
