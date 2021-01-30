/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:43:45 by lelderbe          #+#    #+#             */
/*   Updated: 2021/01/30 14:59:28 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		i;
	int		j;
	int		print;

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		i = 0;
		while (s1[i])
		{
			j = 0;
			print = 0;
			while (!print && s2[j])
			{
				if (s1[i] == s2[j])
					print = 1;
				j++;
			}
			j = 0;
			while (j < i)
			{
				if (print && s1[j] == s1[i])
					print = 0;
				j++;
			}
			if (print)
				write(1, &s1[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
