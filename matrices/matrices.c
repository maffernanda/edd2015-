#include <stdio.h>

int main(){
int matriz_x[3][3];
int matriz_y[3][3];
int matriz_res[3][3];

	printf("CPrimera matriz\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Ingresa el valor (%d, %d)", i,j);
			scanf("%d", &matriz_x[i][j]);
			}
	}

	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++){
			printf("%d ", matriz_x[i][j]);     
		}
			printf("\n");
	}     
	  
	printf("\nSegunda matriz\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Ingresa el valor (%d, %d)", i,j);
			scanf("%d", &matriz_y[i][j]);
			}
	}

	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++){
			printf("%d ", matriz_y[i][j]);     
		}
			printf("\n");
	}
	printf("\nMatriz resultado\n");
	for(int i=0;i<3; i++){
		for(int j=0;j<3;j++){ 
			matriz_res[i][j]=0;
				for(int k=0;k<3;k++){
			matriz_res[i][j]=(matriz_res[i][j]+(matriz_x[i][k]*matriz_y[k][j]));
		
		}
		printf("%d ", matriz_res[i][j]);
	}
	printf("\n");
}
		

return 0;
}
