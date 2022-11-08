#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	n;
	int *arr;
	int	v;
	int	cnt = 0;

	scanf("%d", &n);
	arr = (int *)malloc(sizeof(int) * n);
	if (!arr)
		return (0);
	for (int i = 0 ; i < n ; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &v);
	for (int i = 0 ; i < n ; i++)
	{
		if (arr[i] == v)
			cnt++;
	}
	printf("%d\n", cnt);
	return (0);
}