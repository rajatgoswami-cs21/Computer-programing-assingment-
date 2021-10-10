#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,s6,total,percentage,average;


     printf("Enter your marks : ");
    scanf("%f %f %f %f %f %f",&s1,&s2,&s3,&s4,&s5,&s6);


     total = s1+s2+s3+s4+s5+s6;

     average = (s1+s2+s3+s4+s5+s6)/6;

    percentage = (total/600)*100;

  
     printf("Your total marks is _ %.2f\n Average of your marks is _ %.2f\n Percentage of your marks is _ %.2f",total,average,percentage);



    return 0;
}