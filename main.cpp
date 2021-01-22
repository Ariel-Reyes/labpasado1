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
		
		
		switch(op){ // uso del bloque switch para las opciones 
			case 1:
				int n; 
				cout<<"Ingrese la cantidad de n: "<<endl; // se le pide el dato al usuario 
				cin>>n; 
				
				while(n<=0){
					cout<<"Numeros negativos o 0 no , Ingrese otro numero: "<<endl; 
					cin>>n;
				}
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
					
				 cout<<"Ingrese la elevacion para e: "<<endl; 
					int ele; 
					cin>>ele;  // se le pide al usuario que ingrese la elevacion de euler
					
					double valor_e;  
					valor_e = exp(ele); // se saca el valor de euler 
					
					double part_down; 
					part_down= 1 + valor_e;  // se crea la parte (1 + e^x)
					
					double parte_arriba;  // esto es 1/(1+ e^x)
					parte_arriba = 1/part_down; 
					cout<<"La respuesta es: " << parte_arriba; // se imprime la respuesta 
					break; 
					case 3:
						cout<<"Adios...."<<endl;
						break; 
			
				default:
					cout<<"Ingrese opcion diferente"<<endl;
				break;   
		}
	}
		return 0;
	}
