//call by refrance, i want to get the area, peimiter, and diamiter of a circle, using call by refrance and get r from the user, using scanf
#include <stdio.h>
#include <math.h>

void circleCalc(double r, double *a, double *p, double *d) {
    *a = M_PI * r * r;
    *p = 2 * (M_PI * r);
    *d = 2 * r;
}

int main(int argc, const char * argv[]) {
    double radius;
    double a, p, d;
    printf("This program is used to get the Area, Perimiter, and Diamater of a circle, you just need to put in your radius\nWhat is your radius: ");
    scanf("%lf", &radius);
    
    circleCalc(radius, &a, &p, &d);
    
    printf("With the value of r = %lf\nArea = %lf\nPerimiter = %lf\nDiameter = %lf\n", radius, a, p, d);
    return 0;
}
