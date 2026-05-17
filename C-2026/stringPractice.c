#include <stdio.h>
#include <string.h>

int main() { /*Assignment in a string "12:33:52, extract 12, 33, and 52 using string functions such as strchr and strcpy/strncpy"*/
    char date[] = "12:33:52";
    char month[3];
    char day[3];
    char year[3];
    int spos1, spos2;
    int strLength;
    printf("This program will extract the numbers out of %s\n", date);

    //how to get length of string
    strLength = strlen(date);
    printf("The length of your string was %d\n", strLength);

    //getting the positions of the : in the string
    char *res = strchr(date, ':');
    spos1 = res - date;
    char *res2 = strchr(res+1, ':'); // the plus one is just because the area the res is pointing in the array is still on the first : and we want to get it away from that so it can find the seccond one.
    spos2 = res2 - date;
    
    //Getting the diffrent parts of the array into their own seperate array
    strncpy(month, date, spos1);
    month[spos1] = '\0';

    int dayLength = spos2 - spos1 - 1;
    strncpy(day, date + spos1 + 1, dayLength);
    day[dayLength] = '\0';

    strcpy(year, date + spos2 + 1);

    printf("The pos of :1 is %d\nThe pos of :2 is %d\n", spos1, spos2);
    printf("The month of the array is %s\nThe day of the array is %s\nThe year of the array is %s\n", month, day, year);
    return 0;
}