//Directivas del preprocesador y variables
/*Las directivas del preprocesador en C son las librerias como la stdio.h*/
#include<stdio.h>
/*Las macros sirven para definir variables que utilizaremos a lo largo del programa, estas no cambiaran su valor a lo largo de la ejecucucion del mismo*/
//EJEMPLO:
#define PI 3.1416//Las macros no llevan ";"

//Esto es una variable global
int x = 5;

int main()
{
    /*Las variables son espacios en memoria a los cuales les podemos asignar un nombre para que contengan un tipo de dato especifico. Existen dos tipos de variables, las locales y las globales, las locales solo pueden ser utilizadas dentro de la funcion en la cual fueron creadas, mientras que las globales son declaradas por fuera de una funcion y pueden ser utilizadas en cualquier parte del codigo*/
    //Esto es una variable local
    int y = 10;
    /*Para declarar una variable primero debemos indicar el tipo de dato que pondremos dentro de ella, posteriormente la nombramos y por ultimo le asignamos un valor*/
    int suma;//Podemos crear variables sin asignarles ningun valor
    suma = x + y; 

    printf("La suma es: %i", suma);
     /*El i% nos indica que la variable suma se encontrara dentro de si*/

    return 0;
}