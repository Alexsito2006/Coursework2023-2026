/*Collatz Conjecture*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int startVal;
    printf("this code will perform collatz conjecture, any number you put in the formula will bring it to 1.\n");
    printf("What do you want the start value to be?\n(Bigger it is the longer the program will take: ");
    scanf("%d", &startVal);
    while(startVal != 1) {
        if(startVal % 2 == 0) {
            startVal = startVal/2;
            printf("%d\n", startVal);
        }
        else {
            startVal = (startVal * 3) + 1;
            printf("%d\n", startVal);
        }
    }
    
    printf("Your value has reached 1\n");
    return EXIT_SUCCESS;
}
