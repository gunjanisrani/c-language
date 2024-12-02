/* Q)Write a program in C to input 10 integer numbers in an array and print the numbers in
reverse order. */

#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
    }
    for(int j=9;j>=0;j--){
        printf("%d",arr[j]);
        printf("\n");
    }
    return 0;
}
