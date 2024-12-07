#include <stdio.h>

int main(void) {
    /*
     * I'm not writing the whole problem as it's large af
     *
     * Enter ISBN: 978-0-393-97950-3
     * GS1 prefix: 978
     * Group identifier: 0
     * Publisher code: 393
     * Item number: 97950
     * Check digit: 3
     */

    int prefix, identifier, code, itemNumber, checkDigit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &code, &itemNumber,
          &checkDigit);

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher Code: %d\n"
           "Item number: %d\nCheck digit: %d\n", prefix, identifier, code,
           itemNumber, checkDigit);
}
