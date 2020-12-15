/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 16:26:33 by lelderbe          #+#    #+#             */
/*   Updated: 2020/12/15 16:48:19 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		reccursion_binary_search(int value, int arr[], int low, int high)
{
	int		pos;

	pos = low + (high - low) / 2;
	if (arr[pos] == value)
		return (pos);
	if (low == high)
		return (-1);
	if (arr[pos] < value)
		return (binary_search(value, arr, pos + 1, high));
	else
		return (binary_search(value, arr, low, pos - 1));

}

int		main(void)
{
	int		arr[] = {1, 3, 5, 6, 10, 12};

	printf("index: %d\n", reccursion_binary_search(1, arr, 0, 5));
}
