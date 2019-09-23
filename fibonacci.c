
//Written by Hugh Mc Keeney 

//Calculate the first n fibonacci numbers, with n being the user input

#include <stdio.h>




int fibonacci(int n);
int main(void)
{
	int n;
	
	printf("Insert a value for n\n");
	scanf("%d", &n);
	fibonacci(n);
}

int fibonaccicalculator(int n);
int fibonacci(int n)
{
	int i, j = 0;
	
	for(i=1; i<=n; i++)
	{
		printf("%d ", fibonaccicalculator(j));
		j++;
	}
}


int fibonaccicalculator(int n)
{
	if (0 == n )
	{
		return 0;
	}
	if (1 == n)
	{
		return 1;
	}
	if (1 <= n)
	{
		return fibonaccicalculator(n-1) + fibonaccicalculator(n-2);
	}
	
		
}