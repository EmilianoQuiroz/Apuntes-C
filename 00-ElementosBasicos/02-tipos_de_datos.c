//Tipos de datos en C
#include<stdio.h>
/*Esta libreria nos permite trabajar con datos de tipo booleanos*/
#include<stdbool.h>

int main()
{
    int numeroEntero = 1;//Dato de tipo entero
    char caracter = 'a';//Dato de tipo caracter
    float flotante = 1.5;//Dato de tipo decimal
    double flotante2 = 3.141615;//Almacena datos de tipo decimal pero mas precisos
    short entero = 2;//Es casi lo mismo que int
    long flotante3 = 12.12121212;//Almacena datos de tipo flotante con mas presicion que double

    printf("El valor del entero es: %i \n", numeroEntero);
    printf("El valor del caracter es: %c \n", caracter);
    printf("El valor del flotante es: %.2f \n", flotante);//Podemos limitar el numero de decimales que queremos mostrar con un "." y el numero que indique la cantidad de decimales a mostrar entre el "%" y la "f" que indica el tipo de dato 
    printf("El valor del double es: %lf \n", flotante2);
    printf("El valor del short es: %i \n", entero);
    printf("El valor del long es: %li \n", flotante3);


    return 0;
}
