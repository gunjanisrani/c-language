/* Q3 Write a program in c to accept a no from the user and check if the 
number is even or odd using pointers . Create a function with no returntype with parameter. */

#include<stdio.h>
void check(int,int*);
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    int*ptr=&a;
    check(a,ptr);
    return 0;
}
void check(int a,int* ptr){
    if(*ptr%2==0){
        printf("%d is an even number",a);
    }
    else{
        printf("%d is an odd number",a);
    }
}