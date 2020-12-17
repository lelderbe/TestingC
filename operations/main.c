/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 15:02:54 by lelderbe          #+#    #+#             */
/*   Updated: 2020/12/15 15:18:43 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		bit1count(unsigned x)
{
	unsigned	count;

	count = 0;
	while (x)
	{
		count++;
		x &= x - 1;
	}
	return (count);
}

void	comma()
{
	int			i;
	int			j;

	i = 5, j = 7;
	printf("i: %d, j: %d\n", i, j);
}

int		main(void)
{
	/*
	unsigned	x;

	x = 7;
	printf("%d\n", x);
	printf("%d\n", x &= (x - 1));
	*/
	comma();

	printf("%d\n", bit1count(3));
	
	return (0);
}
