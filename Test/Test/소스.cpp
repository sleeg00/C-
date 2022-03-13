#include <stdio.h>
int hap = 0;
int f(int k)
{
	hap = hap + f(n) + f(n-1);
	if (k == 0)
		return 1;
}
int main()
{
	scanf_s("%d", &n);
	f(n);
	printf("d\n", hap);
	return 0;
}
