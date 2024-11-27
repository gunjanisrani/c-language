#include<stdio.h>
int main(){
    int a,b;
    char c;
    printf("Enter 2 integer numbers\n");
    scanf("%d%d",&a,&b);
    printf("Enter the operation you want to perform on them");
    scanf("%c",&c);
    switch(c){
        case '+':
        printf("Sum is %d",(a+b));
        break;
        case '-':
        printf("Difference is %d",(a-b));
        break;
        case '*':
        printf("Multiplication is %d",(a*b));
        break;
        case '/':
        printf("Division is %d",(a/b));
        break;
        default:
        printf("Enter valid operator");
        break;
    }
    return 0;
}
