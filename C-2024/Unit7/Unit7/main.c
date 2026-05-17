#include <stdio.h>

void readNumbersArray(int num[], int length) {
    for (int i = 0; i < length; i++) {
        printf("Number: ");
        scanf("%d", &num[i]);
    }
}

int findSumArray(int num[],int length) {
    int sum = 0;
    
    for (int i = 0; i < length; i++) {
        sum = sum + num[i];
    }
    
    return sum;
}

int main(int argc, const char * argv[]) {
    int numbers[4];
    int sum = 0;
    int length = sizeof(numbers) / sizeof(numbers[0]);
    readNumbersArray(numbers, length);
    printf("Enter 4 numbers for the array:\n");
    
    sum = findSumArray(numbers, length);
    
    printf("The sum of the array numbers added together = %d\n", sum);
    
    return 0;
}
