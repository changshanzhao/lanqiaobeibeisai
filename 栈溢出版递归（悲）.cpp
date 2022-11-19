#define _CRT_SECURE_NO_WARNINGS 1
#define NUM_MAX 100
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
double res(int n)
{
	double r = 0;
	if(n>=1)
	r = res(n - 1) + 1 / n;
	return r;
}
int main()
{
	int n = 1;
	
	while (1)
	{
		n++;
		int S = res(n);
		if (S > 12)
		{
			printf("%d\n", n);
			break;
		}
	}
	
	return 0;
}