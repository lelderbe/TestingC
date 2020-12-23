/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:19:54 by lelderbe          #+#    #+#             */
/*   Updated: 2020/12/23 15:21:20 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define KEYWORD		01
#define EXTERNAL	02
#define STATIC		04

void	print_bits(int n)
{
	char	buf[] = "00000000";
	int		i;

	i = 8;
	while (n && --i)
	{
		if (n & 1)
			buf[i] = '1';
		n = n >> 1;
	}
	printf("%s\n", buf);
}

int		main(void)
{
	int	flags;

	flags = 0;
	flags = flags | EXTERNAL;
	print_bits(flags);
	flags |= flags | STATIC;
	print_bits(flags);
}
