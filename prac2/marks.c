/* Q)Write a program in C to accept marks of any five subjects and calculate the total and 
percentage and display the grade accordingly. If the percentage is greater than or equal to 
90 then print grade A. If the percentage is greater than or equal to 80 then print grade B. 
If the percentage is greater than or equal to 70 then print grade C.If the percentage is greater 
than or equal to 60 then print grade D; or else print Grade F. */

#include<stdio.h>
int main(){
    int a,b,c,d,e,p,total;
    printf("Enter marks of 5 subjects");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    p=total/5;
    printf("Total marks are %d\n",total);
    printf("Percentage is %d%%\n",p);
    if(p>=90)
    printf("Grade A");
    else if(p>=80)
    printf("Grade B");
    else if(p>=70)
    printf("Grade C");
    else if(p>=60)
    printf("Grade D");
    else
    printf("Grade F");

    return 0;
}