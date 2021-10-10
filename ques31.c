#include<stdio.h>
#include<math.h>
int main()
{
     float P,R,T,CI;
    
    printf("Enter initial principal balance : \n");
    scanf("%f",&P);

    printf("Enter annual interest rate : \n");
    scanf("%f",&R);

    printf("Enter time in years : \n");
    scanf("%f",&T);

    CI = P* pow((1+R/100),T);

    printf("Compound interest : %.2f",CI);

    return 0;
}