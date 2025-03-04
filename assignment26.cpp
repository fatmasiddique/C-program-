#include<stdio.h>
	int main()
	{
	int n,i,f=1;
	printf("Enter an integer:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("Fatorial of a number is %d",f);
		return 0;
	}
