#include <stdio.h>

int c; //Global vareble, can be used anywhere and edited anywhere.

//local verieble
void callMe(int a, int b);

//Example of recursion, function withen functions
int sum(int k);

//Calling a variable through memory
void calculateRec(double l, double w, double *area, double *perimiter) {
    *perimiter = 2 * l + 2 * w;
    *area = l * w;
}

int main(int argc, const char * argv[]) {
    printf("Hello, World!\n");
    int a, b, k;
    
    double area, per;
    double l = 3, w = 5;
    a=7;
    b=8;
    printf("In main a = %d, b = %d\n",a, b);
    callMe(a, b);
    printf("After a = %d, and %d\n", a, b);

    
    printf("What is the k value you want to fot thr sum function\nNum: ");
    scanf("%d", &k);
    
    printf("The sum of the sum function is = %d\n", sum(k));
    
    //calling ver through memory
    calculateRec(l, w, &area, &per);
    printf("Perimiter = %f\nAre = %f\n", per, area);
}

void callMe(int a, int b) {
   int c = 82; //This is called a local var, it can not be used in the main area, only for this specific function
   printf("In callMe Before: a = %d and b = %d\n", a, b);
   b=3;
   a=4;
   printf("In callMe After: a = %d and b = %d\n", a, b);
}
    int sum(int k) {
        if (k > 0)
            return k + sum(k - 1);
        else
            return 0;
    }
