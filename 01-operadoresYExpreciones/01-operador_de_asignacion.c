//Operador de asignacion
#include<stdio.h>

int main()
{
    int a,b,c;//Puedo iniciar varias variables del mismo tipo en una sola linea
    a=b=c=10;//Tambien puedo asignar el mismo valor a tres variables diferentes en la misma linea
    //a+=3 es lo mismo que escribir a = a + 3 pero con el operador de asignacion +=
    //a*=3 es lo mismo que escribir a = a * 3 pero con el operador de asignacion *=
    //a/=3 es lo mismo que escribir a = a / 3 pero con el operador de asignacion /=
    
    printf("El valor de a es: %i", a);

    return 0;
}