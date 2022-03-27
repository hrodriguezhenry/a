#include <iostream>    //Declaro la libreria de entrada y salida de datos
#include <stdlib.h>

using namespace std;

class Calculadora // Estructuro la clase calculador
{
	private:
		float a;
		float b;
	public:
		Calculadora(float, float);
		void suma();
		void resta();
		void multiplicacion ();
		void division ();
};

Calculadora::Calculadora(float _a, float _b){
	a=_a;
	b=_b;
}

void Calculadora::suma(){
	cout<<"\nEl valor de la suma es: "<<a+b<<endl;
}

void Calculadora::resta(){
	cout<<"\nEl valor de la resta es: "<<a-b<<endl;
}

void Calculadora::multiplicacion(){
	cout<<"\nEl valor de la multiplicacion es: "<<a*b<<endl;
}

void Calculadora::division(){
	cout<<"\nEl valor de la division es: "<<a/b<<endl;
}

int main(){
	int numero;
	float c, d;
	cout<<"                        CALCULADORA                       "<<endl<<endl;
	cout<<"    1.SUMA  "<<endl;
	cout<<"    2.RESTA  "<<endl;
	cout<<"    3.MULTIPLICACION "<<endl;
	cout<<"    4.DIVISION  "<<endl;
	cout<<"\nINGRESE LA OPERACION QUE DESEA REALIZAR: ";
	cin>>numero;
	
	switch(numero){
		case 1:{
			cout<<"\nIngrese el Primer valor: ";
			cin>>c;
			cout<<"Ingrese el Segundo valor: ";
			cin>>d;
	
			Calculadora dato(c, d);
			dato.suma();
			break;}
	
		case 2:{
			cout<<"\nIngrese el Primer valor: ";
			cin>>c;
			cout<<"Ingrese el Segundo valor: ";
			cin>>d;
	
			Calculadora dato(c, d);
			dato.resta();
			break;}
			
		case 3:{
			cout<<"\nIngrese el Primer valor: ";
			cin>>c;
			cout<<"Ingrese el Segundo valor: ";
			cin>>d;
	
			Calculadora dato(c, d);
			dato.multiplicacion();
			break;}
		
		case 4:{
			cout<<"\nIngrese el Primer valor: ";
			cin>>c;
			cout<<"Ingrese el Segundo valor: ";
			cin>>d;
	
			Calculadora dato(c, d);
			dato.division();
			break;}
			
		default:{
			cout<<"\nNO A INGRESADO NINGUNA OPERACION";
			break;}
	}
	system ("pause");
	return 0;
}



