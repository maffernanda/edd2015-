#include <stdio.h>

int main(){
	
int cont=1, dim;
int * apuntador;

printf("Ingresa el tamaño del arreglo\n");
scanf("%d", &dim);
int arreglo[dim];

apuntador=arreglo;

do
{
	*apuntador=cont;
	cont++;
	apuntador++;
} while(cont<=dim);
	apuntador=arreglo;
	
	do
	{
		printf("%d", *apuntador);
		apuntador++;
	}
		while (*apuntador<=dim);

return 0;
}
