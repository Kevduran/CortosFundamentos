#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Juego(int);

int main(){
	
	int num_magico;
	
	srand(time(NULL));
	num_magico=1+rand()%(100);
	cout<<"Bienvenido, intenta adivinar el numero!"<<endl;
	Juego(num_magico);
	
	return 0;
}

void Juego(int magico){
	int num_usuario, i=1;
	char respuesta;
	
	while((num_usuario!=magico)&&(i<6)&&((respuesta!='N')&&(respuesta!='n'))){
		cout<<"Ingrese su numero: ";
		cin>>num_usuario;
		
		if(num_usuario>magico){
			cout<<"El numero debe de ser menor"<<endl;
			cout<<"Le quedan "<<5-i<<" intentos"<<endl;
		}
		if(num_usuario<magico){
			cout<<"El numero debe de ser mayor"<<endl;
			cout<<"Le quedan "<<5-i<<" intentos"<<endl;
		}
		if(num_usuario==magico){
			cout<<"FELICIDADES!! ADIVINASTE"<<endl;
			cout<<"Adivinaste en el intento: "<<i<<endl;
		}
		
		cout<<"Desea continuar?  Y/N  :";
		cin>>respuesta;
		
		i++;
		
		cout<<endl;
	}
	
	
}
