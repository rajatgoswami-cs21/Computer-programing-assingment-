#include<stdio.h>
int main()
{
   float a,b,h,A;
    
   printf("Enter the size of its base 1:");
   scanf("%f",&a);

    printf("Enter the size of its base 2:");
    scanf("%f",&b);

  printf("Enter the height of trapazium :");
  scanf("%f",&h);

   A = 0.5 * (a+b) * h;

  printf("The area of trapazium is %f", A);

    return 0;
}