#include<stdio.h>
#include<math.h>
int main()
{
    float x,squareroot;
     printf("Enter the number of which square root you want : \n");
      scanf("%f",&x);

     squareroot=sqrt(x);

     printf("Square root of your value %.2f ",squareroot);

    return 0;
}