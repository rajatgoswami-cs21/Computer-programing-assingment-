#include<stdio.h>
int main()
{
   int P,R,T,SI;
    
    printf("Enter initial principal balance : \n");
    scanf("%d",&P);

    printf("Enter annual interest rate : \n");
    scanf("%d",&R);

    printf("Enter time in years : \n");
    scanf("%d",&T);

    SI = P*R*T;

    printf("Simple interest : %d",SI);

   return 0;
}


