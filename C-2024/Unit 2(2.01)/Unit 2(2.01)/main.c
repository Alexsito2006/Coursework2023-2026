
//  Unit 2(2.01)

#include <stdio.h>

int main(int argc, const char * argv[]) {
//Muliplying & Dividing Int
    
    int num1, num2;
    int sumDiv, sumMult;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter seccond number: ");
    scanf("%d", &num2);
    
    sumDiv = num1 / num2;
    sumMult = num1 * num2;
    
    printf("%d * %d = %d\n%d / %d = %d\n", num1, num2, sumMult, num1, num2, sumDiv);
    return 0;
}
