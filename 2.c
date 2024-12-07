#include <stdio.h>

int main(void) {
    /*Escribe un programa que formatee la informacion del producto ingresada por
     *el usuario. Una sesion con el programa se deberia de ver asi:
     *
     *Ingresa el numero del item: 583
     *Entra el precio unitario: 13.5
     *Entra la fecha de compra: 10/24/2010
     *
     *item  unit        Purchase
     *      price       Date
     *583   $ 13.50     10/24/2010
     */

    int item, d, m, y;
    double price;

    printf("Enter item number: ");
    scanf("%d", &item);

    printf("\nEnter unit price: ");
    scanf("%lf", &price);

    printf("\nEnter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);

    printf("Items\tUnit\tPurchase\n");
    printf("\t\tprice\tDate\n");
    printf("%d\t\t$ %.1lf\t%d/%d/%d", item, price, d, m, y);
}
