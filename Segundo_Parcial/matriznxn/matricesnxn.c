#include<stdio.h>

int main(){

int n=0;
 
printf("Ingresa el tamaño de la matriz\n");
scanf("%d", &n);

int matriz_x[n][n];
int matriz_y[n][n];
int matriz_resul[n][n];

printf("Primera matriz\n"); 
for(int i=0; i<n; i++){
	for (int j=0; j<n; j++){
		printf("Ingrese el valor\n");
		scanf("%d", &matriz_x[i][j]);
	}
}
for(int i=0; i<n; i++){
	for(int j=0;j<n;j++){
		printf("%d ", matriz_x[i][j]);
	}
	printf("\n");
}
printf("Segunda matriz\n");

for(int i=0; i<n; i++)
{
	for(int j=0; j<n; j++)
	{
		printf("Ingresa el valor\n");
		scanf("%d ", &matriz_y[i][j]);
	}
}

for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		printf("%d ", matriz_y[i][j]);
	}
	printf("\n");
}
		printf("Matriz Resultado\n");
for(int i=0; i <n; i++){
	for(int j=0; j<n; j++){
		matriz_resul[i][j]=0;
		for(int k=0;k<n;k++){
		matriz_resul[i][j]=(matriz_resul[i][j]+(matriz_x[i][k]*matriz_y[k][j]));
	}
	printf("%d ", matriz_resul[i][j]);
}
printf("\n");
}

		





return 0;
}
