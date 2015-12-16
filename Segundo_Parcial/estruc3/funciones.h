#ifndef _List
#define _List

typedef struct sNodo{
int dato;
sNodo * next;
}Nodo;

typedef struct{
Nodo * inicio;
int capacidad;
}list;

void iniciar (list &);
Nodo *Nodonuevo(int );
bool vacia(list &);
void imprimir(list &);
bool insertarMitad(list &, int );
void busqueda (list &, int, int);

#endif
