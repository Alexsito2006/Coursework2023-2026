//Using pointers and ONE function, pass in width and length, and calculate area and perimeter of a rectangle.//
//P = 2(l + w)//
#include <stdio.h>

double calculatePerimiter(double *length, double *width);

int main() {
    double length, width, perimiter;
    printf("This program calculates the perimeter of a rectangle.\n");

    printf("What is the length of the rectangle: ");
    scanf("%lf", &length);
    printf("What is the width of the rectangle: ");
    scanf("%lf", &width);

    perimiter = calculatePerimiter(&length, &width);

    printf("The perimeter of the rectangle is: %.2lf\n", perimiter);
}

double calculatePerimiter(double *length, double *width) {
    double perimiter;
    perimiter = 2 * (*length + *width);
    return perimiter;
}