// largest ele using double pointers//


#include<stdio.h>

int lar_fun(int **ptr1)
{
    
    int i, largest=0;
    for(i=0;i<6;i++)
    {
    if(*(*ptr1+i)>largest)
        largest=*(*ptr1+i);
    }
   return largest;
    
}
int small_fun(int **ptr1)
{
    int i, small=100;
    for(i=0;i<6;i++)
    {
    if(*(*ptr1+i)<small)
        small=*(*ptr1+i);
    }
   return small;
    
}

int  main()
{
    int  arr[6]={80,10,9,8,4,90};
    int *ptr=arr;
    //int **ptr1=&ptr;
   
      int l=lar_fun(&ptr);
     int s=small_fun(&ptr);
   printf("lagest element :%d\n",l);
     printf("smallest element :%d\n",s);
     
}
