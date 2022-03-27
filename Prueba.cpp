#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

int main(){
	
	string text;
	int vocales=0;
	int cons=0;
	string vocal= "aeiou";
string  consonante = "bcdfghjklmnñopqrstvwxyz";
	
	ifstream lec("entrada.txt");
	ofstream esc("salida.txt");
	while(getline(lec, text));
    
   		 for(int i=0; i< text.length() ;i++) 
			{
			for(int x=0; x<vocal[x] ;x++)
			 {
      		  if(text[i] == vocal[x])
           		 vocales++;
     	   }
     	   for(int d=0; d<consonante[d] ;d++)
     	   {
     	    if(text[i] == consonante[d])
           		 cons++;
     	   }
     }
    esc<<"Hay "<<vocales<<" vocales y "<<cons<<" consonantes"<<endl;
    cin.get();
	cin.get();
	return 0;
	}
	



