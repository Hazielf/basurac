#include <stdio.h>

int main(void) {
    /*Escribe un programa que acepta la fecha del usuario en la forma de
     *mm/dd/yyyy y luego muestralo en la forma de yyyymmdd
     *Input: 2/17/2011
     *Output: Ingresaste la fecha 20110217
    */

    int mes;
    int año;
    int dia;

    printf("Introduce una fecha en el formato mm/dd/yyyy: ");
    scanf("%d/%d/%d", &mes, &dia, &año);
    printf("\n\nIngresaste la fecha %d%d%d", año, mes, dia);
}
