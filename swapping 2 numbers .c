#include<stdio.h>
void main()
{
 int num1,num2;
 printf("Enter the two numbers to swap:\n");
 scanf("%d%d",&num1,&num2);
 
 int temp = num1;
 num1 = num2;
 num2 = temp;
 printf("After swapping num1 is %d and num2 is %d \n",num1,num2);
}
