/* Q)Write a program in C to print following pattern:
A
AB
ABC
ABCD */

#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        char ch ='A';
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}