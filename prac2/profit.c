/* Q)Write a program in c to calculate profit and loss. Accept cost price and selling price
 from the user. If sp is greater than cp, then calculate profit amount and display your 
 profit amount, else if cp is greater than sp then calculate loss amount and display your
  loss amount. If both are same then display message no profit no loss. Use else if ladder.
*/

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