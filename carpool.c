#include <stdio.h>

main ()

{

    int people;
    float gas;
    float costFloat;

    scanf("%d%f", &people, &gas);

    people = people + 1;

    if (people != 1) {
        gas = gas + 1;
    }

    costFloat = gas / people;
    printf("%.2f\n", costFloat);

    return 0;
}