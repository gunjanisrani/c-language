/* Q] Write a program in C to accept numbers from the user till the user enters 99, perform
the sum of all the numbers and calculate the average using a while loop. */


#include<stdio.h>
int main(){
    int a,total=0,counter=0,avg;
    while(a!=99){
    printf("Enter any number");
    scanf("%d",&a);
    total=total+a;
    counter++;
    }
    avg=total/counter;
    printf("Sum is %d\n",total);
    printf("Average is %d",avg);
return 0;


}
