#include "nodo.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	char a = 0;
	struct nodo *Insertar_inf;
	struct nodo *Sacar_inf;
	struct nodo *Imprimir_inf;

	struct nodo *Insertar;
	struct nodo *Imprimir;

	struct nodo *Insertar_post;
	struct nodo *Sacar_post;
	struct nodo *Imprimir_post;

	Imprimir_inf = NULL;
	Imprimir = NULL;
	Imprimir_post = NULL;
	
	cout << "Para salir usa Z" << endl;

	while(a != 'Z')
	{
		cout << "Ingresa una operacion" << endl;
		cin >> a;

		if(a != 'Z') {
			Insertar_inf = (struct nodo *) malloc(sizeof(struct nodo) * 1);
			Insertar_inf->val = a;

			if(Imprimir_inf != NULL) {
				Imprimir_inf->sig = Insertar_inf;
				Insertar_inf->sig = NULL;
				Imprimir_inf = Insertar_inf;

				if (a == '+' ||	a == '-' || a == '*' || a == '/') {
					Insertar = (struct nodo *) malloc(sizeof(struct nodo) * 1);
					Insertar->val = Insertar_inf->val;
            				if(Imprimir != NULL) {
						Insertar->sig = Imprimir;
						Imprimir = Insertar;
					}
					else {
						Insertar->sig = NULL;
						Imprimir = Insertar;
					}
				}

			}
			else {
				Insertar_inf->sig = NULL;
				Imprimir_inf = Insertar_inf;
				Sacar_inf = Imprimir_inf;
			}
		}
	}
	Imprimir_inf = Sacar_inf;
	Insertar_inf = Insertar_inf->sig;

	while(Imprimir_inf != Insertar_inf)	{
		if(Imprimir_post != NULL) {
			while(Imprimir_inf->sig != Insertar_inf) {
				Imprimir_inf = Imprimir_inf->sig;
			}
			Insertar_inf = Imprimir_inf;
			Imprimir_inf = Sacar_inf;
			if (Insertar_inf->val == '+' || Insertar_inf->val == '-' || Insertar_inf->val == '*' || Insertar_inf->val == '/') {
				if(Insertar != NULL) {
					Insertar_post = (struct nodo *) malloc(sizeof(struct nodo) * 1);
					Insertar_post->val = Insertar->val;
					Insertar_post->sig = Imprimir_post;
					Imprimir_post = Insertar_post;
					Insertar = Insertar->sig;
				}
			}
			else {
				Insertar_post = (struct nodo *) malloc(sizeof(struct nodo) * 1);
				Insertar_post->val = Insertar_inf->val;
				Insertar_post->sig = Imprimir_post;
				Imprimir_post = Insertar_post;
			}
		}
		else {
			Insertar_post = (struct nodo *) malloc(sizeof(struct nodo) * 1);
			Insertar_post->val = Insertar->val;
			Insertar_post->sig = NULL;
			Imprimir_post = Insertar_post;
			Sacar_post = Imprimir_post;
			Insertar = Insertar->sig;
		}
	}
	
	Sacar_post = Imprimir_post;
	cout << "Infijo" << endl;

	while(Imprimir_inf != NULL) {
		cout << Imprimir_inf->val;
		Imprimir_inf = Imprimir_inf->sig;
		Insertar_inf = Imprimir_inf;
		free(Sacar_inf);
		Sacar_inf = Imprimir_inf;
	}
	cout << endl;
	cout << "Postfijo" << endl;
	
	while(Imprimir_post != NULL) {
		cout << Imprimir_post->val;
		Imprimir_post = Imprimir_post->sig;
		Insertar_post = Imprimir_post;
		free(Sacar_post);
		Sacar_post = Imprimir_post;
	}
	cout << endl;
	return 0;
}
