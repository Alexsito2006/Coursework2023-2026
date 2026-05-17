//
//
// Using Structs get the S.A, and V of a sphere.
//
//
//

#include <stdio.h>

struct myStruct {
    double radius;
    double sa, V;
};

struct myStruct Calculations(struct myStruct r) {
    struct myStruct Sphere;
    Sphere.sa = 4 * 3.14 * r.radius * r.radius;
    Sphere.V = 4 / 3 * 3.14 * r.radius * r.radius * r.radius;
    return Sphere;
}

int main(int argc, const char * argv[]) {
    struct myStruct str;
    
    printf("Enter your redius for your sphere: ");
    scanf("%lf", &str.radius);
    
    Calculations(str);
    
    printf("Your values are %.2lf, %.2lf\n", str.V, str.sa);
   
    return 0;
}
