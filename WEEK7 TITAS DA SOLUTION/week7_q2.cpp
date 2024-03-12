#include<stdio.h>
int pascal(int n)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=(n-i);j++)
		{
			printf(" ");	
		}
			int coef=1;
		for(int k=1; k<=i ;k++)
		{
			printf("%d ",coef);
			coef=coef*(i-k)/k;
		}
		printf("\n");
	}
}
int main()
{
	int n=5;
	pascal(n);
}
