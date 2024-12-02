/* Q)Print following series using for loop:
1 0 1 0 1 0 */


#include<stdio.h>
int main(){
    for(int i=0;i<6;i++){
        if(i%2==0)
        printf("1 ");
        else
        printf("0 ");
    }
    return 0;
}