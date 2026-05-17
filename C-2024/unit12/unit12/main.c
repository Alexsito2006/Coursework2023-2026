#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    printf("Hello, World!\n");
    char str[] = "1245";
    int strnum = atoi(str);
    
    printf("%d\n", strnum + 100);
    
    return 0;
}
