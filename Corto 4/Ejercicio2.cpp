#include <iostream>

using namespace std;

void PedirDatos(float []);
float CalcularMedia(float []);
void Comparar(float [],float);

int main(){
	float alumnos[25];
	float media;
	
	PedirDatos(alumnos);
	media=CalcularMedia(alumnos);
	Comparar(alumnos,media);
	
	return 0;
}

void PedirDatos(float alumnos[]){
	
	for(int i=0;i<25;i++){
		cout<<i+1<<". Digite su estatura: ";
		cin>>alumnos[i];
	}
	
}
float CalcularMedia(float alumnos[]){
	float media,suma=0;
	
	for(int i=0;i<25;i++){
		suma+=alumnos[i];
	}
	media=suma/25;
	
	return media;
}
void Comparar(float alumnos[],float media){
	int contadormayor=0,contadormenor=0;
	
	for(int i=0;i<25;i++){
		if(alumnos[i]>=media){//Aqui se almacenan los que estan arriba de la media y los que se encuentran en la media.(>=)
			contadormayor++;
		}
		if(alumnos[i]<media){//Aqui almacena los alumnos menores a la media
			contadormenor++;
		}
	}
	
	cout<<"\nLa media es "<<media<<endl;
	cout<<"\nExisten "<<contadormayor<<" alumnos con estatura mayor o igual a la media";
	cout<<"\nExisten "<<contadormenor<<" alumnos con estatura menor a la media";
	
}
