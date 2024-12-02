/* Q] Write a program in C to create a function with no returntype and no parameter to
check whether the number is palindrome or not. */

#include<stdio.h>
void palindrome();
void main(){
    palindrome();
}
void palindrome(){
    int n,fn,ln;
    printf("Enter a number");
    scanf("%d",&n);
    ln=n%10;
    fn=n/100;

    if(ln==fn){
        printf("%d is a palindrome",n);
    }
    else{
        printf("%d is not a palindrome",n);
    }
   
    }


