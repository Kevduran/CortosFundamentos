#include <iostream>

using namespace std;

void CalculaBisiesto(int);//Recibe solamente un valor entero que es el año

int main(){
	int fecha;
	
	cout<<"Ingrese el año a verificar: ";
	cin>>fecha;//Se toma el año que se quiere comprobar
	
	CalculaBisiesto(fecha);//Se llama a la funcion
	
	
	return 0;
}

void CalculaBisiesto(int ano){
	
	if ((ano%400)==0){
		cout<<"Su año ingresado es Bisiesto"<<endl;//Verifica que el año ingresado se divisible entre 400
	}
	else if(((ano%4)==0)&&((ano%100)!=0)){//Verifica si el año es divisible entre 4 y no entre 100
		cout<<"Su año ingresado es Bisiesto"<<endl;
	}
	else{//Sino se dan ninguna de las anteriores pues no es año bisiesto
		cout<<"Su año no es Bisiesto"<<endl;
	}
}
