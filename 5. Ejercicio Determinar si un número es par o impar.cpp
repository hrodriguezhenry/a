#include<iostream>

using namespace std;

void pdjavier(){
	cout <<"Me llamo Javier personal";
}


int main(){
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero%2==0){	// "%" Divide a la variable "numero"y le saca el residuo, se valida que el residuo sea igual a "0"
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es impar";
	}
	
	return 0;
}
