/* Q.4) Write a program in C to create a union to accept book name, author name and price
 and display the same. */

 #include<stdio.h>
 union book{
    char name[50];
    char author[50];
    int price;
 }b1,b2,b3;

 int main(){
    printf("Enter book name\n");
    scanf("%s",b1.name);
    printf("Enter author name\n");
    scanf("%s",b2.author);
    printf("Enter book price\n");
    scanf("%d",&b3.price);

    printf("Book name: %s\n",b1.name);
    printf("Author: %s\n",b2.author);
    printf("Price: %d\n",b3.price);

    return 0;
 }