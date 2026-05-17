#include <stdio.h>
#include <string.h>

void outputArray(int nums[], int size);
void addNumsArray(int nums[], int size);
void bubbleSortArray(int nums[], int size);

int main() {
    int myNumbers[7];
    int arrSize;
    arrSize = sizeof(myNumbers) / sizeof(myNumbers[0]);

    addNumsArray(myNumbers, arrSize);
    outputArray(myNumbers, arrSize);

    bubbleSortArray(myNumbers, arrSize);

    outputArray(myNumbers, arrSize); //to see if the bubble sort worked

    //Max in array
    printf("Max in array after bubble sort is %d\n", myNumbers[arrSize - 1]);

    //Min in array
    printf("Min in array after bubble sort is %d\n", myNumbers[0]);

    //Average in array
    int arrSum = 0;
    for (int i = 0; i < arrSize; i++) {
        arrSum = arrSum + myNumbers[i];
    }
    arrSum = arrSum / arrSize;
    printf("The average of the array is %d\n", arrSum);
}


void outputArray(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

void addNumsArray(int nums[], int size) {
    int num;
    for (int i = 0; i < size; i++) {
        num = i + 1;    
        
        printf("Please enter value number %d: ", num);
        scanf("%d", &nums[i]);
    }
    
}

void bubbleSortArray(int nums[], int size) {
    int temp;
    for (int iterations = 0; iterations < size - 1; iterations++)
        for (int i = 0; i < size - 1; i++)
        {
            if (nums[i] > nums[i + 1]) {
                temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
            }
        }
        
}