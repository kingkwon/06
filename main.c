#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sumTwo()
{
	int a, b;
	printf("input two integers : ");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d", a, b, a+b);
}
void square()
{
	int n;
	printf("input a integer : ");
	scanf("%d", &n);
	printf("%d^2 = %d", n, n*n);
}
void get_max()
{
	int x, y;
	printf("input two integers : ");
	scanf("%d %d", &x, &y);
	if(x>y)
	{
		printf("%d", x);
	}
	else if(x<y)
	{
		printf("%d", y);
	}
	else
	{
		printf("%d", x);
	}
}

int main(void) {
	
	sumTwo();
	printf("\n");
	square();
	printf("\n");	
	get_max();
	
	return 0;
}
