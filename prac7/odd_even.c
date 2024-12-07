/* Q) Write a program in C to accept 10 integer numbers and display the total number of
 odd or even numbers. */

#include<stdio.h>
int main(){
    int odd=0,even=0,arr[10];
    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<10;j++){
        if(arr[j]%2==0){
            even++;
        } 
        else{
        odd++;
        }
    }
    printf("Total odd numbers are: %d\n",odd);
    printf("Total even numbers are: %d",even);
    return 0;  
}