#include<stdio.h>
	int main()
	{
		char c;
		int vowel;
		printf("Enter an alphabet:");
		scanf("%c",&c);
		vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
		if(vowel)
		{
			printf("It is a vowel.");
		}
		else
		{
			printf("It is a consonant.");
		}
		return 0;
	}
