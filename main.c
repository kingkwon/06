#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int get_integer()
{
	int x;
	
	printf("input a integer : ");
	scanf("%d", &x);
	return(x);
}
int factorial(int x)
{
	int res=1;
	int i;
	
	for (i=1; i<(x+1); i++)
	{
		res = res*i;
	}
	return res;
}
int Combination()
{
	int n, r;
	int n_fac, nr_fac, r_fac;
	
	n = get_integer();
	r = get_integer();
	
	n_fac = factorial(n);
	nr_fac = factorial(n-r);
	r_fac = factorial(r);
	
	return (n_fac/nr_fac/r_fac);
}
int main(void)
{	
	int res;
	
	res = Combination();
	printf("The result is %d", res);
	
	return 0;
}
