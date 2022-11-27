//Sentencia SWITCH
/*
Esta sentencia sirve para crear muchas condiciones de igualdad. Es útil por ejemplo para la creación de un menú.

Estructura:

switch(opcion){
    case 1: Ejecuto este codigo;
    breack;
    case 2: Ejecuto este codigo;
    breack;
    case 3: Ejecuto este codigo;
    breack;
}
*/

/*EJEMPLO: Pedirle al usuario que digite un numero del uno al siete y dependiendo del numero elegido indicarle a que dia de la semana corresponde*/

#include<stdio.h>

int main()
{
    /*1.Definimos la variable dia */
    int dia;

    /*2.Pedimos al usuario que digite un numero del uno al siete y lo guardamos en la variable*/
    printf("Digite un numero del uno al siete: \n");
    scanf("%i", &dia);

    /*3.Efectuamos la sentencia switch*/
    switch (dia)
    {
    case 1:/*Si se cumple este caso*/
        printf("Lunes");/*Se ejecuta este codigo*/
        break;/*El breack sirve para darle fin a la ejecucion del codigo una vez que se cumple la condicion del case*/
    case 2:
        printf("Martes");
        break;
    case 3:
        printf("Miercoles");
        break;
    case 4:
        printf("Jueves");
        break;
    case 5:
        printf("Viernes");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    }
}