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

    bool insertarMitad(list &lista, int dato){
        Nodo *p, *q, *auxiliar;
        p=lista.inicio;

        if(vacia(lista))
        {
         lista.inicio =Nodonuevo(dato);
            lista.capacidad++;
            }
        else{
        while(p != NULL){
        q=p;
        p=p ->next;
        }
        auxiliar=Nodonuevo(dato);
        q->next=auxiliar;
        lista.capacidad++;
        }
        }

    void busqueda(list &lista, int busq, int dato){
    Nodo *p = lista.inicio, *q, *aux;
    while(p->dato != busq)
    {
    p=p->next;
}
if(p->dato== busq){
    q=p;
    p=p->next;
    aux= Nodonuevo(dato);
    q->next = aux;
    aux->next=p;

}
else if(p == NULL)
    cout<<"No se encontro"<<endl;

}
void imprimir(list &lista){
    Nodo *p=lista.inicio;
    while (p != NULL){
        cout<<p->dato<<" ";
        p=p->next;
    }
}
