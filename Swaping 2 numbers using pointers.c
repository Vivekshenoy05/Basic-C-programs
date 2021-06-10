#include<stdio.h>
void swap(int *num1,int *num2);
int main()
{
 int a=10;
 int b=20;
 swap(&a,&b);
 printf("After swapping x is %d and y is %d ",a,b);
 return 0;
}
void swap(int *num1,int *num2)
{
  int temp;
  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}