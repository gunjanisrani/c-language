/*Q.1] Write a program in C to accept a number from the user and check whether the
number is palindrome or not.*/

#include<stdio.h>
int main(){
    int n,fn,ln;
    printf("Enter a number");
    scanf("%d",&n);
    fn= n/100;
    ln=n%10;
    if (fn==ln){
        printf("Number is a palindrome");
        }
        else{
        printf("Number is not a palindrome");
        }
    return 0;

}