/* Q) Write a program in C to find the area of rectangle and square. */

#include<stdio.h>
int main(){
    int l,b,s;
    printf("Enter the length and breadth of the rectange respectively");
    scanf("%d%d",&l,&b);
    printf("Area of rectangle is %d\n",(l*b));
    printf("Enter side of square\n");
    scanf("%d",&s);
    printf("Area of square is %d",(s*s));
    return 0;

}