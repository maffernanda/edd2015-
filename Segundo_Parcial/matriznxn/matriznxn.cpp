#include<iostream>

using namespace std;

int main(){

int n=0;

cout<<("Ingresa el tamaño de la matriz")<<endl;
cin>>n;

int matriz_x[n][n]; 
int matriz_y[n][n];
int matriz_resul[n][n];

   cout<<("Primera matriz")<<endl;
   for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++){
		   cout<<"Ingresa el valor("<<i<<", "<<j<<")"<<endl;
		   cin>>matriz_x[i][j];
	   }
   }
   for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++){
		   cout<<matriz_x[i][j]<<" ";
}
cout<<" ";
cout<<" ";
cout<<" "<<endl;
}
	   cout<<("Segunda matriz")<<endl;
   for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++){
		   cout<<"Ingresa el valor("<<i<<", "<<j<<")"<<endl;
		   cin>>matriz_y[i][j];
	   }
   }
	   for(int i=0;i<n;i++){
	     for(int j=0;j<n;j++){
		   cout<<matriz_y[i][j]<<" ";
}
cout<<" ";
cout<<" ";
cout<<" "<<endl;
}
	cout<<("Matriz Resultado")<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			matriz_resul[i][j]=0;
			for(int k=0;k<n;k++){
				matriz_resul[i][j]=(matriz_resul[i][j]+(matriz_x[i][k]*matriz_y[k][j]));
			}
			cout<<matriz_resul[i][j]<<" ";
		}
		cout<<" "<<endl;
	}
	
	
	
return 0;
}
