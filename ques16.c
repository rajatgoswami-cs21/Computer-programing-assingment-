#include<stdio.h>
  int main()
  {
     float a,b,sum,multiplication,devide;
      printf("Enter the value of a : \n");
      scanf("%f",&a);

      printf("Enter the value of b : \n");
      scanf("%f",&b);

      sum = a+b;
      multiplication = a*b;
      devide = a/b;

      printf("The sum of given values is %f \n",sum);
      printf("The Multiplication of given values is %f \n",multiplication);
      printf("The Division of given values is %f \n",devide);


      return 0;
  }