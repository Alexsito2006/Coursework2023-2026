
//  Unit 2(2.02)


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, num2, num3, num4, num5;\
    int sum;
    
    printf("Enter number: ");
    scanf("%d", &num1);
    
    printf("Enter number: ");
    scanf("%d", &num2);
    
    printf("Enter number: ");
    scanf("%d", &num3);
    
    printf("Enter number: ");
    scanf("%d", &num4);
    
    printf("Enter number: ");
    scanf("%d", &num5);
    
    sum = num1 + num2 + num3 + num4 + num5;
    
    printf("The sum of all 5 numbers is : %d\n", sum);
    printf("Hello, World!\n");
    return 0;
}
