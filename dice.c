//
// Created by Richard Lowton on 29/03/2020.
//
#include <stdio.h>

main () {

    int d1;
    int d2;
    int sum;
    int specialTax=36;

    scanf("%d", &d1);
    scanf("%d", &d2);
    if ( d1 > 0 && d1 < 7 ) {
        if ( d2> 0 && d2 < 7 ) {
            sum=(d1+d2);
            if (sum > 10) {
                printf("Special Tax\n");
                printf("%d\n", specialTax);
            } else {
                printf("Regular Tax\n");
                printf("%d\n", sum*2);
            }
        }
    }

    return 0;
}