/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 11:58:16 by lelderbe          #+#    #+#             */
/*   Updated: 2021/01/17 12:06:03 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		chars[255];
	int		i;
	char	*s;

	if (argc == 3)
	{
		i = 1;
		while (i < argc)
		{
			s = argv[i];
			while (*s)
			{
				if (!chars[*s])
				{
					write(1, s, 1);
					chars[*s]++;
				}
				s++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
