#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Juego(int);

int main(){
	
	int num_magico;
	
	srand(time(NULL));//Genera el numero magico
	num_magico=1+rand()%(100);//Lo guarda en la variable num_magico
	cout<<"Bienvenido, intenta adivinar el numero!"<<endl;
	Juego(num_magico);
	
	return 0;
}

void Juego(int magico){
	int num_usuario, i=1;
	char respuesta;
	
	while((num_usuario!=magico)&&(i<6)&&((respuesta!='N')&&(respuesta!='n'))){//Si algunas de estas condiciones da falso se cierrael repetidor
		cout<<"Ingrese un numero del 1 al 100: ";
		cin>>num_usuario;
		
		if(num_usuario>magico){//Da la pista si el numero es mayor
			cout<<"El numero debe de ser menor"<<endl;
			cout<<"Le quedan "<<5-i<<" intentos"<<endl;
		}
		if(num_usuario<magico){//Da la pista si el numero es menor
			cout<<"El numero debe de ser mayor"<<endl;
			cout<<"Le quedan "<<5-i<<" intentos"<<endl;
		}
		if(num_usuario==magico){//Da las felicitaciones por haber adivinado
			cout<<"FELICIDADES!! ADIVINASTE"<<endl;
			cout<<"Adivinaste en el intento: "<<i<<endl;
		}
		
		cout<<"Desea continuar?  Y/N  :";//Pregunta al usuario si desea continuar
		cin>>respuesta;
		
		i++;//LLeva el registro de intentos
		
		cout<<endl;
	}
	
	
}
