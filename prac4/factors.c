/* Q] Write a program in C to accept a number from the user and print factors of the number */


#include<stdio.h>
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(a%i==0)
        printf("%d ",i);
    }
    return 0;
}
