#include <iostream>

using namespace std;

void PedirDatos(float [][5],int);
void CalcularNota(float [][5],int);

int main(){
	int n;
	
	cout<<"Digite el numero de estudiantes a ingresar: ";//Pide el numero de estudiantes
	cin>>n;
	
	float alumnos[n][5];
	PedirDatos(alumnos,n);
	CalcularNota(alumnos,n);
	
	
	return 0;
}
void PedirDatos(float alumnos[][5],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<5;j++){
			cout<<"Digite nota "<<j+1<<" para estudiante "<<i+1<<" :";//Rellena la matriz con las notas
			cin>>alumnos[i][j];
		}
	}
}
void CalcularNota(float alumnos[][5], int n){
	float prom[n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<5;j++){
			prom[i]+=(alumnos[i][j]*0.20);	//Suma cada nota con la nota multiplicada anteriormente
		}
		
		cout<<"\nEl promedio del estudiante "<<i+1<<" es "<<prom[i]<<endl;//Muestra resultados
		if(prom[i]>=6.00){
			cout<<"El estudiante ha APROBADO";
		}else{
			cout<<"El estudiante ha REPROBADO";
		}
	}
}
