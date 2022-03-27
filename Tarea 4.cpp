#include <iostream>

using namespace std;

int main(){
	int n[30][30];
	int  f, c, suma=0, n2=0;
	
	cout<<"\t\t\t\tIngrese el numero de filas: "; cin>>f;
	cout<<"\t\t\t\tIngrese el numero de columnas: "; cin>>c;
	cout<<endl;
	
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"\t\t\t\tIngrese un numero: ";
			cin>>n[i][j];
		}
	}
	
	cout<<endl;
	cout<<"\t\t\t\t";
	
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<n[i][j]<<"  ";
			
		}
		cout<<endl;
		cout<<"\t\t\t\t";
	}
	
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
		suma+=n[i][j];
		}
		cout<<endl;
	}
	cout<<"\t\t\t\t"<<suma;
	cout<<endl;
	
	for (int i=1; i<=suma; i++){
		if(suma%i==0){
		n2++;
		}
	}
	
	cout<<endl;
	
	if(n2==2){
		cout<<"\t\t\t\tEl numero es primo";
	}
	
	else{
		cout<<"\t\t\t\tEl numero no es primo";
	}
	cout<<endl;
	
	return 0;
}
