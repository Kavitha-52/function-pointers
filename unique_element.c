#include<stdio.h>
int uniq_element(int **ptr)
{
int i,res=*(*ptr+0);
for(i=1;i<7;i++)
{
res=res ^ *(*ptr+i);
}
return res;
}
int main()
{
int arr[7]={1,2,3,4,1,2,3};
int *ptr=arr;

int x=uniq_element(&ptr);
printf("unique element is %d\n",x);
}
