/*Q)Write a program in C to accept 10 elements in 1D array and check which number is
max.and min*/

#include<stdio.h>
int main(){
    int max,min,arr[10];
    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=1;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }

        }

    printf("Maximum element is %d\n",max);
    printf("Minimum element is %d",min);
    return 0;

    }
