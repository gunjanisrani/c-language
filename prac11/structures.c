/* Q1) Write a program in c to create a structure friend that accept 3 friends information-
 name, nickname, city name, mobile number and display the same. */

 #include<stdio.h>
 struct friend{
    char name[30];
    char nickname[30];
    char city[30];
    int mobile_no;
 }f[3];
 int main(){
    for(int i=0;i<3;i++){
        printf("Enter friend's name: \n");
        scanf("%s",f[i].name);
        printf("Enter friend's nickname: \n");
        scanf("%s",f[i].nickname);
        printf("Enter friend's city: \n");
        scanf("%s",f[i].city);
        printf("Enter friend's mobile number: \n");
        scanf("%d",&f[i].mobile_no);

    }
    for(int j=1;j<4;j++){
        printf("Friend %d details\n",j);
        printf("Name:%s\n",f[j].name);
        printf("Nickame:%s\n",f[j].nickname);
        printf("City:%s\n",f[j].city);
        printf("Number:%d\n",f[j].mobile_no);
        printf("\n");   
    }
    return 0;
 }