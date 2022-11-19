#define _CRT_SECURE_NO_WARNINGS 1
#define NUM_MAX 100
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[NUM_MAX] = {};
	int i = 0;
	scanf("%s", &str);
	for (i = 0; i < NUM_MAX; i++)
	{
		if (str[i]== 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{ 
			switch (str[i])
			{
			case ('a'):
			{
				str[i] = 'A';
				break;
			}
			case ('e'):
			{
				str[i] = 'E';
				break;
			}
			case ('i'):
			{
				str[i] = 'I';
				break;
			}
			case ('o'):
			{
				str[i] = 'O';
				break;
			}
			case ('u'):
			{
				str[i] = 'U';
				break;
			}
			default:
				break;
			}
		}
	}
	printf("%s", str);
	return 0;
}