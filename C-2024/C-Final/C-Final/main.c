#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE output;
    srand(time(NULL));
    int reset = 1;

    while (reset) {
        output = *fopen("/Users/alexlinares/Documents/College/C/Unit11/C-Final/File.txt", "w");
        int n1 = rand() % 10;
        int n2 = rand() % 10;
        int input = 0;
        int ans = n1 + n2;

        printf("What is %d + %d?\nEnter: ", n1, n2);
        scanf("%d", &input);

        if (ans == input) {
            printf("Correct! %d + %d is %d\n", n1, n2, ans);
            fprintf(output, "Correct! %d + %d is %d\n", n1, n2, ans);
        } else {
            printf("Incorrect. %d + %d is %d. Not %d\n", n1, n2, ans, input);
            fprintf(output, "Correct! %d + %d is %d\n", n1, n2, ans);
        }

        printf("Would you like to run this program again?\n(0 = no, 1 = yes): ");
        scanf("%d", &reset);
        
    }

    printf("Goodbye!\n");
    return 0;
}
