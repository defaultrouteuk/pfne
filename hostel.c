#include <stdio.h>

int main ()

{

    int hour;
    int price;

    scanf("%d", &hour);
    if ( hour > 0 && hour < 12 ) {
        // printf("%d", 10+hour*5);
        price=(10+hour*5);
        printf("%d", price <=53 ? price : 53);
    } else {
        // Do Nothing
    }

    return 0;
}