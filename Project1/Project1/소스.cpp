#include <stdio.h>
int pr[10000];
int ch[10000];
int v[100000];
int n, m;
void f(int x , int k)
{
	if (x==m+1)
	{
		for (int i = 1; i<=m; i++)
		{
				printf("%d ", pr[i]);
		}
		printf("\n");
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (ch[i] ==0 && k<i)
			{
				ch[i] = 1;
				pr[x] = i;
				f(x + 1, i);
				ch[i] = 0;
			
			}
		}

	}
}
int main()
{
	scanf_s("%d %d", &n, &m);
	f(1,0);
}