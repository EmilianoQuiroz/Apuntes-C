//Sentencia IF ELSE
/*
Estructura basica

if(Esta condicion se cumple)}{
    se ejecuta este bloque de codigo
}else{
    Si la condicion anterior no se cumple se ejecuta el siguiente bloque de codigo
}
*/

/*EJEMPLO: segun la nota que un alumno digite en nuestro programa indicarle si aprobo o no*/

int main()
{

    /*1.Creamos la variable en donde guardaremos la nota*/
    float nota;

    /*2.Le pedimos al usuario que digite su nota y la guardamos en la variable nota*/
    printf("Indique cual es su nota\n");
    scanf("%f", &nota);

    /*3.Ejecutamos el condicional*/
    if(nota >= 6/*Si se cumple esta condicion*/){
        /*Ejecutamos el siguiente codigo*/
        printf("Su nota es un %.1f y esta aprobado", nota);
    }
    else/*Si no se cumple la condicion anterior*/{
        /*Ejecutamos el siguiente codigo*/
        printf("Desaprobado");
    }

    return 0;
}