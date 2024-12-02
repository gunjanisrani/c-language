/*Q)Write a program in C to accept 10 elements in a 1D array and check whether an
element or number is existing in the array or not. */

#include<stdio.h>
int main(){
    int n,arr[10];
    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
    }
    printf("Enter an element");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        if(n==arr[i]){
            printf("%d exists in the array",n);
        }
        else{
            printf("%d does not exist in the array",n);
        }
        break;
    }
    return 0;
}