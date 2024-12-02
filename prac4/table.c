/* Q] Write a program in C to accept a number from user and print table of that number. */


#include<stdio.h>
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    for(int i=0;i<=10;i++){
        printf("%d x %d = %d\n",a,i,(a*i));
    }


    return 0;
}
