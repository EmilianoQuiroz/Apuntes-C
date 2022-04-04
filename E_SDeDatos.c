//Entrada y salida de datos
#include<stdio.h>

int main(){
	int a = 10;
	float b = 15.5;	
	char c = 'e';
	int x;
	float y;
	char z;

	//Salida de varios datos
	printf("Los tres datos son:%i %f %c \n",a,b,c);
	
	//Entrada de datos
	printf("Digite el valor de la variable x:\n");
	scanf("%i",&x);//Guarda el valor en el scanf
	printf("Digite el valor de la variable y:\n");
	scanf("%f",&y);
	printf("Digite el valor de la variable z:\n");
	scanf("%c",&z);
	
	
	 printf("El valor es: %i %.2f %c",x,y,z);
	
	
	
	return 0;
}
