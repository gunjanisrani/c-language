#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the height of the first person in cm");
    scanf("%d",&a);
    printf("Enter the height of the second person in cm");
    scanf("%d",&b);
    if(a>b)
    printf("Height of the first person:%d is greater",a);
    else
    printf("Height of the second person:%d is greater",b);
    return 0;
}