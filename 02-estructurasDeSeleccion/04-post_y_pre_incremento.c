//¿Postincremento y preincremento?
/*
Preincremento:
int a = 0;
int b = ++a;
Hace a = 1 y b = 1

Mientras que el postincremento:
int a = 0;
int b = a++;
hace a = 1 y b = 0, esto significa que b obtuvo el valor de a anterior a crecimiento
*/

//EJEMPLO

#include<stdio.h>

int main()
{
    int a = 0;
    int b = ++a;

    printf("El valor de a es %i\n", a);
    printf("El valor de b es %i\n", b);

    int c = 0;
    int d = c++;

    printf("El valor de c es %i\n", c);
    printf("El valor de d es %i\n", d);


    return 0;
}