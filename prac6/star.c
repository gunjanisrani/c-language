/* Q) Write a program in C to display the following pattern:
    *
   * *
  * * *
 * * * *
* * * * *  */

#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j<5;j++){
             printf(" ");
        }
        for(int k=1;k<=i;k++){
        printf("* ");
        }

    printf("\n");        
 }

    return 0;
}