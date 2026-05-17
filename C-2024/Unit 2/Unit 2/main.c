//2.03 Calculate Slope
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    double x1, y1, x2, y2;
    double slope;
    printf("This program is used to calculate the slope.\n");
        
    printf("Input x1: ");
    scanf("%lf", &x1);
    printf("Input y1: ");
    scanf("%lf", &y1);
    
    printf("Input x2: ");
    scanf("%lf", &x2);
    printf("Input y2: ");
    scanf("%lf", &y2);
    
    slope = (y2 - y1)/(x2 - x1);
    printf("The slope is %.2f\n", slope);
    
    printf("This program is made by a future google worker\n");
    return 0;
}
