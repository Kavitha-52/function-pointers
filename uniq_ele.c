#include<stdio.h>
int uniq_element(int arr[])
{
int i,res=arr[0];
for(i=1;i<7;i++)
{
res=res^arr[i];
}
return res;
}
int main()
{
int arr[7]={1,2,3,4,1,2,3};
int (*funp)(int arr[])=uniq_element;
int x=(funp)(arr);
printf("unique element is %d\n",x);
}
