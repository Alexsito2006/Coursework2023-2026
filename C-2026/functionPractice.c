#include <stdio.h>
#include <math.h>
double Area(double radius) {
    double area;
    area = M_PI * (radius * radius);
    return area;
}
double Circumference(double radius) {
    double circ;
    circ = 2 * M_PI * radius;
    return circ;
}

int main() {
    double a, c, radius;

    printf("What is the radius of the circle: ");
    scanf("%lf", &radius);

    a = Area(radius);
    c = Circumference(radius);

    printf("Your area: %lf\nYour Circumfrence %lf\n", a, c);
}