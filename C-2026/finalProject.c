#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*  Program will consist of a menu at first
    This is an automatic question generator.
    1. Add
    2. Subtract
    3. Multiply
    4. Divide
    5. Show past results (Make a file and send results to file)
    6. End
    Which one?: 
*/

void randomizeNumbers(int *x, int *y) {
    //Makes x and y random numbers
    *x = (rand() % 10 + 1) * 2; //Random numbers from 1 - 20 (+ 1 excludes 0)
    *y = (rand() % 10 + 1) * 2; //The * 2 makes the numbers never odd for division}
}

int main() {
    int x, y, results, usrAnswer, qstChoice;
    char usrChoice = 'Y';
    char usrqstChoice = 'Y'; //for the if stetement loops
    FILE* fptr;
    int ansRight = 0, ansWrong = 0; //ints for the file

    while(usrChoice == 'Y')
    {   
        fptr = fopen("Results.txt", "a"); 
        randomizeNumbers(&x, &y); 
        printf("Ths is an automatic question generator.\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Show past results\n6. End\nWhich one?: ");
        scanf(" %d", &qstChoice);
        usrqstChoice = 'Y'; //for the if stetement loops
        
        if(qstChoice == 1) { //Add
            while (usrqstChoice == 'Y') {
                randomizeNumbers(&x,&y);
                results = x + y;
                printf("%d + %d = ", x, y);
                scanf("%d", &usrAnswer);

                if (usrAnswer == results) {
                    printf("Yes! %d + %d = %d\n", x, y, usrAnswer);
                    ansRight++;
                }
                else {
                    printf("Incorect. %d + %d = %d\n", x, y, results);
                    ansWrong++;
                }   
                
                printf("Want another question?\n(Y/N):");
                scanf(" %c", &usrqstChoice);
            }

        }
        else if (qstChoice == 2) { //Subtract
            while (usrqstChoice == 'Y') {
                randomizeNumbers(&x,&y);
                results = x - y;
                printf("%d - %d = ", x, y);
                scanf("%d", &usrAnswer);

                if (usrAnswer == results) {
                    printf("Yes! %d - %d = %d\n", x, y, usrAnswer);
                    ansRight++;
                }
                else {
                    printf("Incorect. %d - %d = %d\n", x, y, results);
                    ansWrong++;
                }   
                
                printf("Want another question?\n(Y/N):");
                scanf(" %c", &usrqstChoice);
            }
        }
        else if (qstChoice == 3) { //Multiply
            while (usrqstChoice == 'Y') {
                randomizeNumbers(&x,&y);
                results = x * y;
                printf("%d * %d = ", x, y);
                scanf("%d", &usrAnswer);

                if (usrAnswer == results) {
                    printf("Yes! %d * %d = %d\n", x, y, usrAnswer);
                    ansRight++;
                }
                else {
                    printf("Incorect. %d * %d = %d\n", x, y, results);
                    ansWrong++;
                }   
                
                printf("Want another question?\n(Y/N):");
                scanf(" %c", &usrqstChoice);
            }
        }
        else if (qstChoice == 4) { //Divide
            while (usrqstChoice == 'Y') {
                randomizeNumbers(&x,&y);
                results = x / y;
                printf("Round Answer.\n%d / %d = ", x, y);
                scanf("%d", &usrAnswer);

                if (usrAnswer == results) {
                    printf("Yes! %d / %d = %d\n", x, y, usrAnswer);
                    ansRight++;
                }
                else {
                    printf("Incorect. %d / %d = %d\n", x, y, results);
                    ansWrong++;
                }   
                
                printf("Want another question?\n(Y/N):");
                scanf(" %c", &usrqstChoice);
            }
        }
        else if (qstChoice == 5) {
            fptr = fopen("Results.txt", "r");
            char line[1024]; //to get previous answers
            printf("-------------------------------------------------\n");
            while (fgets(line, sizeof(line), fptr) != NULL) {
                printf("%s", line);
            }
            printf("-------------------------------------------------\n");
        }
        else if (qstChoice == 6) {
            fprintf(fptr, "%d Correct, %d Wrong\n", ansRight, ansWrong);
            fclose(fptr);
            return 0;
        }
        
        if (fptr == NULL) {
            printf("File was not open\n");
            return 1;
        }
    }

}