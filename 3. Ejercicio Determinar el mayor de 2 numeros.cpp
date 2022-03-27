#include<iostream>

using namespace std;

int main(){
	int n1, n2;
	
	cout<<"Ingrese el primer numero: ";
	cin>>n1;
	cout<<"Ingrese el segundo numero: ";
	cin>>n2;
	
	if(n1==n2){
		cout<<"Los dos numeros son iguales";
	}
	
	else if(n1>n2){
		cout<<"El numero mayor es: "<<n1;
	}
	else{
		cout<<"El numero mayor es: "<<n2;
	}
	
	return 0;
}
