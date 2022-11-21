/*Para empezar a trabajar con C debemos ingsar la siguiente libreria*/
#include<stdio.h>
/*Esta libreria ("standard input-output header") incluye las definiciones de las macros, las constantes, las declaraciones de funciones de la biblioteca estándar del lenguaje de programación C para hacer operaciones, estándar, de entrada y salida, así como la definición de tipos necesarias para dichas operaciones*/

/*Tambien necesitamos una funcion principal, esta es la funcion main*/
int main()
{
    /*Esta es una funcion que viene incluida en la libreria stdio.h, la cual nos permite imprimir en pantalla lo que nosotros pongamos dentro de ella*/
    printf("Hola mundo\n");
    //Con \n podremos hacer un salto de linea
    printf("Hola mundo");

    return 0;//Es una buena practica e indica al programa que este ya finalizo sin ningun tipo de inconveniente
}
