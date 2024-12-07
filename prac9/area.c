/* Q)Wap in C to create a function with return type with parameter to calculate area of triangle */

#include<stdio.h>
int area(int,int);
int main(){
    int b,h,ans;
    printf("Enter base of the triangle");
    scanf("%d",&b);
    printf("Enter height of the triangle");
    scanf("%d",&h);
    ans=area(b,h);
    printf("Ärea of the triangle is %d",ans);
    return 0;
}
int area(int x,int y){
    return (0.5*x*y);
}