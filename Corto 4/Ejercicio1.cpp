#include <iostream>
#include <string.h>

using namespace std;
int Clave(char [],int);//funcion para cambiar a la clave murcielago

int main(){
	char cadena[50];
	int longitud=0;
	
	cout<<"Digite la palabra deseada: ";
	cin.getline(cadena,50,'\n');//guarda hasta donde el usuario presiona Enter
	
	longitud=strlen(cadena);//toma la cantidad total de elementos
	
	int aux[longitud];
	/*
	Esta variable guardara los numeros correspondientes ya que
	al ser una cadena tipo char, no puede tener valores numericos en sus espacios
	*/
	
	for(int i;i<longitud;i++){//Aqui se decide si llamar a la funcion para hacer el cambio o no.
		switch(cadena[i]){
			case 'm':
			case 'u':
			case 'r':
			case 'c':
			case 'i':
			case 'e':
			case 'l':
			case 'a':
			case 'g':
			case 'o':
				aux[i]=Clave(cadena,i);
				break;
			default:
				break;
		}
	}
	
	for(int i=0;i<longitud;i++){
		switch(cadena[i]){
			case 'm':
			case 'u':
			case 'r':
			case 'c':
			case 'i':
			case 'e':
			case 'l':
			case 'a':
			case 'g':
			case 'o':
				cout<<aux[i];//Si en el espacio de la cadena se encuentra una de las letras a cambiar muestra el auxiliar
				break;
			default:
				cout<<cadena[i];//Sino, muestra su letra normal.
				break;
		}
	}
	
	return 0;
}

int Clave(char cadena[],int posicion){
	
	switch(cadena[posicion]){
			case 'm':
				return 0;
				break;
			case 'u':
				return 1;
				break;
			case 'r':
				return 2;
				break;
			case 'c':
				return 3;
				break;
			case 'i':
				return 4;
				break;
			case 'e':
				return 5;
				break;
			case 'l':
				return 6;
				break;
			case 'a':
				return 7;
				break;
			case 'g':
				return 8;
				break;
			case 'o':
				return 9;
				break;
			default:
				break;//Depende de la letra, asi regresa su valor.
	}
}
