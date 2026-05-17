#include <stdio.h>

void readNumbers(int num[], int len) {
    for (int i = 0; i < len; i++) {
        printf("Num%d: ", i);
        scanf("%d", &num[i]);
    }
}

int arrayAverage(int num[], int len) {
    int sum = 0;
    
    for (int i = 0; i < len; i++) {
        sum = sum + num[i];
    }
    
    int average = sum / len;
    return average;
}

int arrayMin(int num[], int len) {
    int min = num[0];
    
    for (int i = 1; i < len; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }
    
    return min;
}

int arrayMax(int num[], int len) {
    int max = num[0];
    
    for (int i = 1; i < len; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    
    return max;
}

int main(int argc, const char * argv[]) {
    int nums[10];
    int length = sizeof(nums) / sizeof(nums[0]);
    
    readNumbers(nums, length);
    
    for (int i = 0; i < length; i++) {
        printf("%d ", nums[i]);
    }
    
    printf("\n\nThe average of your numbers is %d\n", arrayAverage(nums, length));
    printf("The minimum value is %d\n", arrayMin(nums, length));
    printf("The maximum value is %d\n", arrayMax(nums, length));
    
    return 0;
}
