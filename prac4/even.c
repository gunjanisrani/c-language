/* Q] Write a program in C to print all even numbers from 20 to 80 including 20 and 80. */


#include<stdio.h>
int main(){
    for(int i=20;i<=80;i++){
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}
