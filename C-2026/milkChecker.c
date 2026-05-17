/*Milk Checker*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int milkAge;
    printf("How old is your milk?\nAge: ");
    scanf("%d", &milkAge);
    
    if (milkAge > 100)
        printf("This milk might kill you are you crazy??\n");
    else if (milkAge > 80)
        printf("Might cause some issues in the stomach best throw it out\n");
    else if (milkAge > 30)
        printf("This milk is mostly fine\n");
    else
        printf("Milk is good.\n");
}
