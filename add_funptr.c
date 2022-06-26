//add,sub,mul using array of function ptr//
#include<stdio.h>
int add(int a,int b);// function declarations
int sub(int a,int b);
int mul(int a,int b);
int main()
{
int a,b;
printf("enter a,b values\n");
scanf("%d %d",&a,&b);
int (*fun[3])(int,int);  // array of function pointers declaration
fun[0]=add; // add function  is assign to 0th index
fun[1]=sub;  // sub function  is assign to 1st index
fun[2]=mul;    // mul function   is assign to 2nd index
printf("add sub mul\n");
for(int i=0;i<3;i++)
printf("%d\n",fun[i](a,b));  // function call & print
}

int add(int a,int b) // add funvtion
{
 return a+b; //return result

}

int sub(int a,int b) //sub function
{
return a-b;  //return result
}

int mul(int a,int b) // mul function
{
return a*b;    //return result

}
