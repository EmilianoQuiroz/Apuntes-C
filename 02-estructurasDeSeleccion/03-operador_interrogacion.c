//Operador interrogacion 
/*
Estructura:

condicion ? Epresion1: Expresion2
*/

/*EJEMPLO: Pedir al usuario que digite un numero e indicar si este es par o impar*/

#include<stdio.h>

int main()
{
    /*1.Declaramos las variables*/
    int numero;

    /*2.Le pedimos al usuario que digite el numero y lo guardamos en la variable*/
    puts("Digite un numero: \n");
    scanf("%i", &numero);

    /*3.Creamos el operador*/
    (numero%2 == 0/*Si el profucto de numero dividido dos da 0*/) ?/*Entonces ejecutaremos este codigo*/printf("El numero es par\n") :/*Si la condicion no se cumple, ejecuto el siguiente codigo*/ printf("El numero es impar");
    
    return 0;
}