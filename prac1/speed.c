#include<stdio.h>
int main(){
    int d,s,t;
    printf("Enter distance and time of the vehicle\n");
    scanf("%d%d",&d,&t);
    printf("Speed of the vehicle is %d",(d/t));
    return 0;
}