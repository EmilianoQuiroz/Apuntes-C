//Sentencia IF
/*Si pasa x cosa efectuamos X accion

La utilizamos cuando tenemos una condición que nos arroja dos resultados: Verdadero o Falso. Por ejemplo: Escribir un programa en C que lea una edad e indique si la persona puede votar o no. La instrucción if abre un paréntesis que dentro lleva una condición: edad >= 18
Justo después de la condición que está entre paréntesis, se abre una llave {, todo lo que siga a partir de aquí y hasta que se cierre la llave, son las instrucciones que se ejecutarán si la condición es verdadera.*/

#include<stdio.h>

int main()
{
    int a, b;

    a=b=3;

    if( a+b==6 ){/*Si a + b es igual a 6*/

        printf("El resultado es 6");/*Ejecutamos esta accion*/

    }

    return 0; 
}