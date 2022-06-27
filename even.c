#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

#define SIZE 100
int arr[SIZE];

void *even(void *ptr)
{
	printf("Even Numbers in 1-100:\n----------------------\n");
	for(int i=1;i<=SIZE;i++) // To print EVEN numbers
	{
		if(i%2 == 0)  // if remainder is zero, even number
	        printf("%d ",i);
	}
	printf("\n");	
}


int main()
{
	
	pthread_t newthread; //Varaible of pthread
	pthread_create(&newthread,NULL,&even,NULL); //Creating a pthread for even
	
	pthread_join(newthread,NULL);
	return 0;
}
