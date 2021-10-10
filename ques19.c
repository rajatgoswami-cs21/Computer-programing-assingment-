#include<stdio.h>
int main()
{
   float radius,diameter,circumfrence,area;

   printf("Enter the Radius of Circle : \n");
   scanf("%f",&radius);

    diameter = 2*radius;
    circumfrence = 2*3.14*radius;
    area = 3.14*radius*radius;

    printf("The Diameter of circle is : %f \n",diameter);
    printf("The circumfrence of circle is : %f \n",circumfrence);
    printf("The area of circle is : %f \n",area);

    

    return 0;
}