/* Q)Write a program in C to accept 2D matrix of size 3x3 and perform cube of the matrix. */

#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter 9 elements of the array");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);}
    }
    printf("Your matrix is:\n");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);}

    }
    printf("\n");
    printf("Your cubed matrix is:\n");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d ",(arr[i][j])*(arr[i][j])*(arr[i][j]));
            }
    }
}