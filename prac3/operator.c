#include<stdio.h>

int main() {
    int a, b;
    char c;
    
    printf("Enter 2 integer numbers\n");
    scanf("%d%d", &a, &b);

    // Consume the newline character left by the previous scanf
    getchar(); 

    printf("Enter the operation you want to perform on them\n");
    scanf("%c", &c);

    switch(c) {
        case '+':
            printf("Sum is %d\n", (a + b));
            break;
        case '-':
            printf("Difference is %d\n", (a - b));
            break;
        case '*':
            printf("Multiplication is %d\n", (a * b));
            break;
        case '/':
            if (b != 0) {
                printf("Division is %d\n", (a / b));
            } else {
                printf("Error: Division by zero is not allowed\n");
            }
            break;
        default:
            printf("Enter valid operator\n");
            break;
    }
    
    return 0;
}
