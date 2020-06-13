#include <iostream>

using namespace std;

void CalculaBisiesto(int);//Recibe solamente un valor entero que es el a�o

int main(){
	int fecha;
	
	cout<<"Ingrese el a�o a verificar: ";
	cin>>fecha;//Se toma el a�o que se quiere comprobar
	
	CalculaBisiesto(fecha);//Se llama a la funcion
	
	
	return 0;
}

void CalculaBisiesto(int ano){
	
	if ((ano%400)==0){
		cout<<"Su a�o ingresado es Bisiesto"<<endl;//Verifica que el a�o ingresado se divisible entre 400
	}
	else if(((ano%4)==0)&&((ano%100)!=0)){//Verifica si el a�o es divisible entre 4 y no entre 100
		cout<<"Su a�o ingresado es Bisiesto"<<endl;
	}
	else{//Sino se dan ninguna de las anteriores pues no es a�o bisiesto
		cout<<"Su a�o no es Bisiesto"<<endl;
	}
}
