/* Q4) Write a program in c to accept 5 elements in an integer array and 
display all the elements in reverse order using pointer. */

#include<stdio.h>
int main(){
    int*ptr, arr[5];
    printf("Enter 5 elements\n");
    for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    ptr=&arr[4];
    for(int j=0;j<=4;j++){
        printf("%d",*ptr);
        *ptr--;
        printf("\n");
    }
    return 0;
}
