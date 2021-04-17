#include <stdio.h>

int		compare_asc(int a, int b)
{
	return (a - b);
}

int		compare_desc(int a, int b)
{
	return (b - a);
}

void	bubble_sort(int *arr, int len, int (*cmp)(int, int))
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (cmp(arr[j], arr[j + 1]) > 0)
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	print_arr(int *arr, int len)
{
	int	i;

	i = 0;	
	while(i < len)
		printf("%d ", arr[i++]);
	printf("\n");
}

int		main(void)
{
	int	arr[] = {1, 4, 8, -3, 0, 6, 6, 9};
	int	len;

	len = sizeof(arr) / sizeof(arr[0]);
	printf("original  : ");
	print_arr(arr, len);
	printf("sort asc  : ");
	bubble_sort(arr, len, compare_asc);
	print_arr(arr, len);
	printf("sort desc : ");
	bubble_sort(arr, len, compare_desc);
	print_arr(arr, len);
	return (0);
}
