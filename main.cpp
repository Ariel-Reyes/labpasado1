#include <iostream>
#include<math.h>
using namespace std; 

int main() {
	
	
int op; 
while(op!=3){ //creacion del menu 
	cout<<"--------Menu---------"<<endl;
	cout<<"1) SUMATORIA"<<endl; 
	cout<<"2) FORMULA"<<endl;
	cout<<"3) SALIR"<<endl;
	cout<< "INGRESE LA OPCION QUE DESEA:"<<endl;
	cin>>op; 
	
	switch(op){
		case 1:
			int n; 
			cout<<"Ingrese la cantidad de n: "<<endl; // se le pide el dato al usuario 
			cin>>n; 
		int i; 
		i =1; 
		int f1; // formula 1 == k + 1
		int elevar; // nos sirve para hacer (k+1)^2
		int f2; // formula 2 == k*(k+1)^2   
		int acum; // acumulador 
		acum=0;  
		while(i<=n){ // usamos un ciclo for para poder hacer que se vaya repitiendo segun el numero ingresado por el usuario
			f1 = i + 1; 
			elevar = pow(f1, 2); // usamos pow de la libreria math 
			f2 = i * (elevar);  // completamos la formula 
			acum = acum + f2;  // acumulamos los resultados de k*(k+1)^2
			
			
			
			i++; 
			
		}
	cout<< "La respuesta es: " <<acum << endl;  // imprimimos la respuesta 
			
			
			break;
			
			case 2:
				
				
			break;
			default:
				cout<<"...."<<endl;
			break;   
	}
	
	
	
	
}
	

	
	
	
	
	return 0;
}
