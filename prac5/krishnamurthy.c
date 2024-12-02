/* Q)Accept a 3 digit number and check whether it is a krishnamurthy number. */

#include<stdio.h>
int main(){
    int n,fact=1,sum=0,og,last_dig;
    printf("Enter a number");
    scanf("%d",&n);
    og=n;
    while(n!=0){
        last_dig=n%10;
        fact=1;
        for(int i=1;i<=last_dig;i++){
        fact=fact*i;
        }

        sum=sum+fact;
        n=n/10;        
    }
    if(og==sum){
        printf("%d is a krishnamurthy number",og);
    }
    else{
     printf("%d is not a krishnamurthy number",og);
    }

return 0;
}