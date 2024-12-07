/* Q5) Write a program in c to accept a string from the user and display the  total length of the
 string. Convert the string to uppercase and copy one string to another string. */

 #include<stdio.h>
 #include<string.h>
 int main(){
    char a[30],b[30];
    printf("Enter a string\n");
    gets(a);
    printf("Length of the string is %d\n",strlen(a));
    printf("In uppercase: %s",strupr(a));
    strcpy(b,a);
    printf("After copying, the second string contains:%s",b);
    return 0; 
 }