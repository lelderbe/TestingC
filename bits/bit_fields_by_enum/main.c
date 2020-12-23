/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:19:54 by lelderbe          #+#    #+#             */
/*   Updated: 2020/12/23 15:23:50 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

enum { KEYWORD = 01, EXTERNAL = 02, STATIC = 04 };

void	print_bits(int n)
{
	char	buf[] = "00000000";
	int		i;

	i = 8;
	while (n && (--i >= 0))
	{
		buf[i] = '0' + (n & 1);
		n >>= 1;
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
	flags = 255;
	print_bits(flags);

}
