#include<stdio.h>
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%10==0)
    printf("%d is divisible by 10",a);
    else
    printf("%d is not divisible by 10",a);
    return 0;
}