#include <iostream>

using namespace std;

void CalculaBisiesto(int);

int main(){
	int fecha;
	
	cout<<"Ingrese el a�o a verificar: ";
	cin>>fecha;
	
	CalculaBisiesto(fecha);
	
	
	return 0;
}

void CalculaBisiesto(int ano){
	
	if ((ano%400)==0){
		cout<<"Su a�o ingresado es Bisiesto"<<endl;
	}
	else if(((ano%4)==0)&&((ano%100)!=0)){
		cout<<"Su a�o ingresado es Bisiesto"<<endl;
	}
	else{
		cout<<"Su a�o no es Bisiesto"<<endl;
	}
}
