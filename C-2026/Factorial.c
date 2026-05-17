//Factorial
#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int index = 1;
    int factorial, factSum = 1;
    
    printf("Please enter your factorial number: ");
    scanf("%d", &factorial);
    
    while (index != factorial) {
        index++;
        factSum = factSum * index;
    }
    
    printf("%d! = %d\n", factorial, factSum);
    return EXIT_SUCCESS;
}
