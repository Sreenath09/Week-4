/*TO READ 3 NUMBERS AND READ ITS AVERAGE*/
#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;

    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);

avg=(float)(a+b+c)/3; //type casting is used in the form of (float)//

    printf("\nAverage is = %f",avg);

    return 0;
 }

