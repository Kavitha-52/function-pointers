// add 2 values using function pointers//
#include<stdio.h>
int sum(int a,int b);  // function declaration
int main()
{
int a,b,x=0;
printf("enter a,b values\n");
scanf("%d %d",&a,&b);       // read a,b values
int (*fun)(int,int)=&sum;  // (or) int (*fun)(int,int)=sum;  -->it contains the address of sum function 
x=fun(a,b); // function call


/* another method 

int (*fun)(int,int);
fun=&sum;
x=fun(a,b); 
*/

printf("%d\n",x);  //  print result
}

int sum(int a,int b)   //function defination
{
return a+b;  // it perform the addition  & return the result
 
}

