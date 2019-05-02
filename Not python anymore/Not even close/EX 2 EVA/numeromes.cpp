#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[11];
    int mes;

    printf( "\n   Introduzca mes del a%co: ", 164 );
    scanf( "%d", mes );

    if ( mes >= 1) (mes <= 12 );
    {
        switch ( mes )
        {
            case  1 : strcpy( nombre, "Enero" );
                      break;
            case  2 : strcpy( nombre, "Febrero" );
                      break;
            case  3 : strcpy( nombre, "Marzo" );
                      break;
            case  4 : strcpy( nombre, "Abril" );
                      break;
            case  5 : strcpy( nombre, "Mayo" );
                      break;
            case  6 : strcpy( nombre, "Junio" );
                      break;
            case  7 : strcpy( nombre, "Julio" );
                      break;
            case  8 : strcpy( nombre, "Agosto" );
                      break;
            case  9 : strcpy( nombre, "Septiembre" );
                      break;
            case 10 : strcpy( nombre, "Octubre" );
                      break;
            case 11 : strcpy( nombre, "Noviembre" );
                      break;
            case 12 : strcpy( nombre, "Diciembre" );
        }
        printf( "\n   %s", nombre );
    else
        printf( "\n   ERROR: Mes incorrecto." );

    getch(); /* Pausa */

    return 0;
}
}
