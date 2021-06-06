#include<stdio.h>
int fact(int num);
void main()
{
    int f,a;
    printf("Enter a no:");
    scanf("%d",&a);
    f=fact(a);
    printf("Factorial of %d is : %d \n",a,f);
}
int fact(int num)
{
    if(num==0)
     return 1;
    else
     return (num*fact(num-1));
}
