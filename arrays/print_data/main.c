/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 16:02:16 by lelderbe          #+#    #+#             */
/*   Updated: 2020/12/15 16:11:40 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_arr(int *arr, int size, int count)
{
	int		i;

	i = 0;
	while (i < size)
	{
		printf("%3d%c", arr[i], (i % count == (count - 1) || i == size - 1) ? '\n' : ' ');
		i++;
	}
}

int		main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	
	print_arr(arr, 12, 1);
	print_arr(arr, 12, 5);
	print_arr(arr, 12, 10);
	print_arr(arr, 12, 20);
	return (0);
}
