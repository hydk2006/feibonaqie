#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	printf("%d,%d", a, b);
	for (int i = 1; i <= 40; i++)
	{
		a = a + b;
		b = b + a;
		printf(",%d,%d", a, b);

	}
	return 0;
}