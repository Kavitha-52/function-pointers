//print value  using function pointers//

#include<stdio.h>
void value(int);
int main()
{

/*  another way
void(*funp)(int)=value;
(funp)(10);
*/

void (*funp)(int);
funp=value;
funp(10);
}
void value(int a)
{
printf("value of a is %d\n",a);
}
