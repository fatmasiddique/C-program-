#include<stdio.h>
	int main()
	{
		int x,last_digit;
		printf("Enter an integer:");
		scanf("%d",&x);
		last_digit=x-(x/10)*10;
		printf("The last digit of %d is %d\n",x,last_digit);
			return 0;
	}
