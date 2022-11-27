//Entradas y salidas de datos
#include<stdio.h>

int main()
{
    int numero; 
    
    printf("Ingrese un dato (numero entero): ");//Para mostrar datos en pantallas podemos usar la funcion printf
    /*Para ingresar un dato lo podemos capturar con la funcion scanf, esta funcion se compone del tipo de dato y del nombre de la variable en donde se guardara el dato*/
    scanf("%i",&numero);
    //Mostramos el dato ingresado por pantalla
    printf("El numero ingresado es: %i",numero);
    
    /*Si lo que queremos es capturar un dato de tipo string, en lugar de scanf, la funcion que debemos utilizar es gets("nombre de mi variable")*/

    return 0;
}