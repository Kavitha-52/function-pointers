#include<stdio.h>
int sum_arr(int **ptr)
{
int sum=0;
for(int i=0;i<5;i++)
{
sum=sum + *(*ptr+i);
}
return sum;
}
int main()
{
int a[5]={5,2,3,4,5};
int *ptr=a;
int b=sum_arr(&ptr);
printf("sum=%d\n",b);
}
