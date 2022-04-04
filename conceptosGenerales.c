/*
¿Que es un algoritmo?
Un algoritmo es metodo para resolver un determinado problema.

Pasos para resolver un algoritmo
1. Diseño de algoritmo
2. Expresar el algoritmo como un programa 
3. Ejecucion y validacion del programa por la computadora  

Caracteristicas de un algoritmo
1.Debe ser preciso
2.Debe ser definido
3.Debe ser finito

Un algoritmo debe tener 3 partes, la entrada, el proceso y la salida
*/

#include<stdio.h>//Libreria para entrada y salida de datos 
	//Macros => son valores definidos que no cambian 
	//Ejemplo:
	#define PI 3.1416

/*Variables globales, son las que estan fuera de 
una funcion y pueden usarse en todo el codigo*/
int x = 5; //Variable global

int main(){
	
	printf("Hola mundo\n");//Los puntos y comas son estrictamente necesarios 
	//Saltos de linea = \n
/*Variables locales, son aquellas que se encuantran adentro de 
una funcion y solo se ejecutan en el ambito de la misma*/
	int y =10; //Variable local 	
	
	//Operaciones basicas
	float suma = 0; // Las operaciones se inicializan en 0
	suma = PI + y; //Suma de una variabele local con una macro
	
	printf("La suma es: %.2f",suma);
	
	
	
	return 0;
}

