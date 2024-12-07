/* Q.2) Write a program in C to create a structure student. Accept roll no, student name,
 and percentage of student. Accept information of 3 students and display details 
 of the student whose roll no is 102 otherwise display appropriate messages.*/

 #include<stdio.h>
 struct student{
   char name[30];
   int roll_no;
   float percent;
 }s[3];

 int main(){
    int flag=0;

    for(int i=0;i<3;i++){
        printf("Enter student's name: \n");
        scanf("%s",s[i].name);
        printf("Enter student's roll number: \n");
        scanf("%d",&s[i].roll_no);
        printf("Enter student's percentage: \n");
        scanf("%f",&s[i].percent);
    }
    for(int j=0;j<3;j++){
        if(s[j].roll_no==102){
            printf("Student name:%s\n",s[j].name);
            printf("Student roll number:%d\n",s[j].roll_no);
            printf("Student percentage:%f\n",s[j].percent);
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("No student with roll number 102 found\n");
    return 0;
 }

 