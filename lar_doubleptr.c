//lagest element in array using double pointers//
#include<stdio.h>
int lar(int **p1)
{
    int temp=0;
    for(int i=0;i<5;i++)
    {
             if(*(*p1+i)>temp)
             temp=*(*p1+i);

    }
    return temp;
}


int  main()
{
    int arr[5]={100,10,9,8,4};
    int *p=arr;// p contains address of array
    //int **p1=&p;
    printf("%d\n",lar(&p));
}
