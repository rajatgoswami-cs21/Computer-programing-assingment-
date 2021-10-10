#include<stdio.h>
#include<math.h>
int main()
{

    float S,s1,s2,s3,area;
     printf("Enter the sides of triangle : \n");
     scanf("%f %f %f",&s1,&s2,&s3);
     S=(s1+s2+s3)/2;
     area = sqrt(S*(S-s1)*(S-s2)*(S-s3));
     printf("The area of triangle by heron's formula is : %f",area);


    return 0;
}