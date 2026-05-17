#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[])
{
    int num1, num2, sum, diff, product, quotient;
    printf("This program will add, subtract, multiply and divide.\nNum1: ");
    scanf("%d", &num1);
    printf("Num2: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    
    printf("The sum: %d\nThe Diff: %d\nThe Product: %d\nThe Quotient: %d\n",sum,diff,product,quotient);
    return EXIT_SUCCESS;
}
