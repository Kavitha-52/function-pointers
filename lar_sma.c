// largest & smallest ele using function pointers//


#include<stdio.h>
int lar(int arr[])
{
    int i, largest;
    largest=arr[0];
    for(i=1;i<6;i++)
    {
    if(arr[i]>largest)
        largest=arr[i];
    }
   return largest;
    
}
int small(int arr[])
{
    int i,smallest;
    smallest=arr[0];
    for(i=1;i<6;i++)
    {
    if(arr[i]<smallest)
        smallest=arr[i];
    }
   return smallest;
    
}


int  main()
{
    int  l,s,i,arr[6]={10000,10,9,8,4,90};
    int (*fun[2])(int arr[])={lar,small};
    /*
    l=fun[0](arr);
        s=fun[1](arr);
 
     printf("lagest element :%d\n",l);
       printf("smallest element :%d\n",s);*/
       
       printf("largest & smallest elements are:\n"); 
    for(i=0;i<2;i++)
    {
       printf("%d\n",fun[i](arr));
       }
}
