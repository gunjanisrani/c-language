/* Q.Write a program in C to read any month number and display the number of days for that 
month using switch case. */

#include<stdio.h>
int main(){
    int n;
    printf("Enter month number: ");
    scanf("%d",&n);
    switch(n){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("This month has 31 days");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("This month has 30 days");
        break;
        case 2:
        printf("This month has 28 days");
        break;
        default:
        printf("Enter a number between 1 and 12");
        break;
    }
    return 0;
}