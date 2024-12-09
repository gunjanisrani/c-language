/* Q.3) Write a program in C to create structure Employee, to store employee ID, employee name, 
department name and salary of employee. Calculate and display the total salary of all employees. 
Accept at least 3 employee information. */

#include<stdio.h>
struct employee{
    char name[30];
    int id;
    char dept[30];
    int salary;
}emp[3];
int main(){
    int total=0;
    for(int i=0;i<3;i++){
        printf("Enter employee's name\n");
        scanf("%s",emp[i].name);
        printf("Enter employee's ID\n");
        scanf("%d",&emp[i].id);
        printf("Enter employee's department\n");
        scanf("%s",emp[i].dept);
        printf("Enter employee's salary\n");
        scanf("%d",&emp[i].salary);
    }
    for(int i=0;i<3;i++){
        total=total+emp[i].salary;
    }
    printf("Total salary of all employees is %d",total);
    return 0;

}