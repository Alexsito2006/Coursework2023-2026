#include <stdio.h>
#include <stdlib.h>

int main() 
{
    //File pointerr to store the value returned by fopen
    FILE* fptr;
    char Data[50];

    //opening the file in read mode (r = read only, w = creates file, a = appends file)
    fptr = fopen("filename.csv", "r");

    //Checking if the file is opened successfully
    if (fptr == NULL) {
        printf("The file was not opened.\n");
    } else {
        printf("File is being pointed too\n");

        //int multiplyer;
        //printf("How much do you want to multiply your results by?: ");
        //scanf("%d", &multiplyer);
        //for (int x = 1; x <= 3; x++) {
        //    fprintf(fptr, "%d, %d, %d", x*multiplyer, x*x*multiplyer, x*x*x*multiplyer);
        //    fputs("\n", fptr);
        //}

        //Gets info from the file
        int a, b, c;

        while (fgets(Data, sizeof(Data), fptr) != NULL) {
            // Extract numbers from the line
            sscanf(Data, "%d,%d,%d", &a, &b, &c);

            int sum = a + b + c;

            printf("Line: %sSum = %d\n\n", Data, sum);
        }


        //Closing the file
        fclose(fptr);
        printf("File is closed\n");
    }
    return 0;
} 