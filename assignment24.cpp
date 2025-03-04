#include<stdio.h>
	int main()
	{
		char toss;
		printf("Enter the coin result (H for heads, T for tails):");
		scanf("%c",&toss);
		if(toss=='H'||toss=='h')
		{
			printf("HEADS");
		}
		else if(toss=='T'||toss=='t')
		{
			printf("TAILS");
		}
		else
		{
			printf("Invalid input. Enter 'H' or'T'");
		}
		return 0;
	}
