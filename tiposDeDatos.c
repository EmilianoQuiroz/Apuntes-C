//Tipos de datos
#include<stdio.h>

int main(){
	char a = 'e';//Tipo de dato caracter
	//El tamaño de de este dato es de un byte
	short b = -15;//Tipo de dato short
	//Su tamaño es de 2 bytes
	int c = 1024; //Tipo de dato entero
	//Su tamaño es de 2 bytes
	unsigned int d = 128; //Tamaño de 2 bytes
	long e = 1223234; //Tiene un tamaño de 4 bytes
	float f = 14.34; // Tiene un tamaño de 4 byte
	double m = 12331223.123223;//Tamaño de 8 bytes
	
	  
	printf("El elemento es: %c\n",a);
	printf("El elemento es: %i\n",b);
	printf("El elemento es: %i\n",c);
	printf("El elemento es: %i\n",d);
	printf("El elemento es: %li\n",e);
	printf("El elemento es: %.2f\n",f);
	printf("El elemento es: %.3lf",m);
	
	
	return 0;
}
