#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

typedef struct TNumero{
	float num;
}numero;


void Lectura(float *ptr,int Max);
void Alta(float *ptr,int Max);
void Actualizacion(float *ptr, int Max);


int main(int argc,char** argv){
	int Max;
	float *ptr=NULL;
	
	cout<<"Tamaño del vector: ";
	cin>>Max;
	numero Tvector[Max];
	ptr=&Tvector[0].num;
		
		Alta(ptr,Max);
		Lectura(ptr,Max);
		Actualizacion(ptr,Max);
		
		Lectura(ptr,Max);
}

void Alta(float *ptr,int Max){
	
	for(int i=0;i<Max;i++){
		cout<<"Ingresa el valor: ";
		cin>>*(ptr+i);
	}
	
	
}
void Lectura(float *ptr, int Max){
	for(int x=0; x<Max;x++){
		cout<<"Valores: "<<*(ptr+x)<<"\n";
	}
}
void Actualizacion(float *ptr, int Max){
	int opc;
	int pos;
	cout<<"Menu"<<"\n"<<"6.-Actualizar"<<"\n"<<"7.-Eliminar"<<"\n"<<"8.-Insertar"<<"\n"<<"Opcion: ";
	cin>>opc;
	switch(opc){
	case 6:
		//Inicio actualizar
		cout<<"Que posicion modificar?: ";
		cin>>pos;
		cout << "Ingrese nuevo valor: ";
	 	cin >> *(ptr+pos-1);
	 	cout<<"El valor de la posicion "<<pos<<" es: "<<*(ptr+pos-1)<<"\n";
	 break;
	 
	 case 7:
	 	//Inicio Eliminacion
	 	cout<<"Que posicion eliminar?";
	 
	 	cin>>pos;
	 	for(int i=pos;i<Max;i++){
	 		
	 		*(ptr+i-1)=*(ptr+i);
	 		if(i==Max-1){
	 			*(ptr+i)=0;
			 }
		 }
	 	
	 break;
	 
	 
	 case 8:
	 	//Inicio Inserción
	 	
	 break;
	}
}
int Busqueda(){
	
}
