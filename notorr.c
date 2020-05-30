//
// Created by Richard Lowton on 07/04/2020.
//
#include <stdio.h>
int main(void){;
int sunny = 0;
int vacation = 1;
int NOTsunny = !sunny && vacation;
if (NOTsunny){
printf("It's cloudy but at least I'm on vacation!\n");
}
return 0;
}