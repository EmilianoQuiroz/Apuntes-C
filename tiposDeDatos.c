//Tipos de datos
#include<stdio.h>

int main(){
	char a = 'e';//Tipo de dato caracter
	//El tama�o de de este dato es de un byte
	short b = -15;//Tipo de dato short
	//Su tama�o es de 2 bytes
	int c = 1024; //Tipo de dato entero
	//Su tama�o es de 2 bytes
	unsigned int d = 128; //Tama�o de 2 bytes
	long e = 1223234; //Tiene un tama�o de 4 bytes
	float f = 14.34; // Tiene un tama�o de 4 byte
	double m = 12331223.123223;//Tama�o de 8 bytes
	
	  
	printf("El elemento es: %c\n",a);
	printf("El elemento es: %i\n",b);
	printf("El elemento es: %i\n",c);
	printf("El elemento es: %i\n",d);
	printf("El elemento es: %li\n",e);
	printf("El elemento es: %.2f\n",f);
	printf("El elemento es: %.3lf",m);
	
	
	return 0;
}
