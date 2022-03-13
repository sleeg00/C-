#include <stdio.h>
int main()
{
	int n;
	int b[1000000]={0};
	int cnt2 = 0;
	while (1)
	{
		scanf_s("%d", &n);
		
		if (n == 0)
			break;
		int a[1000000]={0};
		int cnt = 0;
		for (int i = 2; i <= n*2; i++)
		{
			if (a[i] == 1)
				continue;
			else
				for (int j = 2; i * j <= n*2; j++)
					a[i * j] = 1;
		}
		for (int i = n; i <= n*2; i++)
		{
			if (a[i] == 0)
				cnt++;
		}
		b[cnt2++] = cnt;
		
	}
	for (int i = 0; i < cnt2; i++)
		printf("%d\n", b[i]);
	return 0;
}