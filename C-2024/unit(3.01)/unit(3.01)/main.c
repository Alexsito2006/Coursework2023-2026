#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    double calc, comp, phy, soc, bio;
    double average = 0;
    
    printf("Welcome to Alex's University\nYou have 5 classes, Calculus, Comp, Physics, Sociology, and Biology\n\nPut it all the percentages for these classes and this program will the the average, and the grade point.\n\n");
    
    printf("What is your grade point in calc: ");
    scanf("%lf", &calc);
    
    printf("What if your grade point in comp: ");
    scanf("%lf", &comp);
    
    printf("Whati s your grade point in physics: ");
    scanf("%lf", &phy);
    
    printf("What is your grade point in sociology: ");
    scanf("%lf", &soc);
    
    printf("What is your gade point in biology: ");
    scanf("%lf", &bio);
    
    average = (calc + comp + phy + soc + bio) / 5;
    
    printf("\n\nYour average is %.2lf\n", average);
    
    if (average >= 90) {
        printf("You're average grade is A, goodjob!\n");
    }
    else if (average >= 80) {
        printf("You're average grade is B, goodjob!\n");
    }
    else if (average >= 70) {
        printf("You're average grade is C, You passed!\n");
    }
    else if (average >= 60) {
        printf("You're average grade is D, try better next time.\n");
    }
    else
        printf("You failed, grade is F\n");
    return 0;
}
