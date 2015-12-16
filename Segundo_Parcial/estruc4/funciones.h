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
bool insertarAlFinal(list &, int );
bool insertarAlPrincipio(list &, int );
int busqueda(list &, int, int );
void borrarTodo(list &lista);

#endif
