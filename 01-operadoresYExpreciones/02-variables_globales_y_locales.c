//Variables locales y variables globales
#include<stdio.h>

/*En caso de querer usar la variable y en cualquier parte de nuestro codigo debemos crearla por fuera de nuestra funcion princial de la siguiente manera*/
//int i; De este modo la variable pasa a ser global
int main()
{
    //La variable local i solo es accesible dentro del ciclo for
    for(int i = 0; i < 16; i++){
        printf("\n El valor de i es %i",i);    
        i +=3;
    }

    /*Si queremos accedera la variable i por fuera del bucle for nos dara como resultado error, ya que al ser local solo funciona dentro de su ambito y no podemos acceder por fuera de ella*/

    return 0;
}

//Variables locales VS variables globales
/*Las variables locales solo estan disponibles en una funcion y despues no se pueden volver a utilizar por fuera de esta, en cambio, las variables globales estan disponibles para cualquier funcion y no desaparecen despues de su ejecucion*/