#include <stdio.h>
#include <string.h>

void outputArray(int nums[], int size);
void addNumsArray(int nums[], int size);
void selectionSortArray(int nums[], int size);

int main() {
    int myNumbers[7];
    int arrSize;
    arrSize = sizeof(myNumbers) / sizeof(myNumbers[0]);

    addNumsArray(myNumbers, arrSize);
    outputArray(myNumbers, arrSize);

    selectionSortArray(myNumbers, arrSize);

    printf("Sorted with selection sort: ");
    outputArray(myNumbers, arrSize);
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

void selectionSortArray(int nums[], int size) {
    int i, j, min_idx, tmp;
    for (i = 0; i < size - 1; ++i) {
        min_idx = i;
        for (j = i + 1; j < size; ++j) {
            if (nums[j] < nums[min_idx]) min_idx = j;
        }
        if (min_idx != i) {
            tmp = nums[i];
            nums[i] = nums[min_idx];
            nums[min_idx] = tmp;
        }
    }
}