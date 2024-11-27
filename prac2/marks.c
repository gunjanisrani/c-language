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