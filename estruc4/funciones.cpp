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

    bool insertarAlFinal(list &lista, int dato){
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
                p=p->next;
            }
            auxiliar = Nodonuevo(dato);
            q->next=auxiliar;
            lista.capacidad++;
        }
    }

void borrarTodo(list &lista){
Nodo *aux;

    while(lista.inicio !=NULL){
    aux = lista.inicio;
    lista.inicio = aux -> next;
    delete(aux);

    }
    lista.inicio=NULL;
    lista.capacidad=0;
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


    int busqueda(list &lista, int busq, int dato){
    Nodo *p = lista.inicio, *q, *aux;
    while(p->dato != busq)
    {
    p=p->next;
    if(p == NULL){
    cout<<"No esta el dato"<<endl;
    return 0;
    }
}
if(p->dato== busq){
    q=p;
    p=p->next;
    aux= Nodonuevo(dato);
    q->next = aux;
    aux->next=p;

}


}
void imprimir(list  &lista){
    Nodo *p=lista.inicio;
    while (p != NULL){
        cout<<p->dato<<" ";
        p=p->next;
    }
}


