#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter cost price");
    scanf("%d",&cp);
    printf("Enter selling price");
    scanf("%d",&sp);
    if(sp>cp)
    printf("Profit amount is %d",(sp-cp));
    else if(sp<cp)
    printf("Loss amount is %d",(cp-sp));
    else
    printf("No profit no loss");
    return 0;
}