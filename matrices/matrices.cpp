#include<iostream>

using namespace std;

int main(){

int matriz_x[3][3]; 
int matriz_y[3][3];
int matriz_resul[3][3];

   cout<<("Primera matriz")<<endl;
   for(int i=0;i<3;i++){
	   for(int j=0;j<3;j++){
		   cout<<"Ingresa el valor("<<i<<", "<<j<<")"<<endl;
		   cin>>matriz_x[i][j];
	   }
   }
   for(int i=0;i<3;i++){
	   for(int j=0;j<3;j++){
		   cout<<matriz_x[i][j]<<" ";
}
cout<<" ";
cout<<" ";
cout<<" "<<endl;
}
	   cout<<("Segunda matriz")<<endl;
   for(int i=0;i<3;i++){
	   for(int j=0;j<3;j++){
		   cout<<"Ingresa el valor("<<i<<", "<<j<<")"<<endl;
		   cin>>matriz_y[i][j];
	   }
   }
	   for(int i=0;i<3;i++){
	     for(int j=0;j<3;j++){
		   cout<<matriz_y[i][j]<<" ";
}
cout<<" ";
cout<<" ";
cout<<" "<<endl;
}
	cout<<("Matriz Resultado")<<endl;
	for(int i=0;i<3; i++){
		for(int j=0;j<3;j++){
			matriz_resul[i][j]=0;
			for(int k=0;k<3;k++){
				matriz_resul[i][j]=(matriz_resul[i][j]+(matriz_x[i][k]*matriz_y[k][j]));
			}
			cout<<matriz_resul[i][j]<<" ";
		}
		cout<<" "<<endl;
	}
	
	
	
return 0;
}
