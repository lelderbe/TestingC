/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_v2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:03:23 by lelderbe          #+#    #+#             */
/*   Updated: 2021/01/30 15:14:09 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	static char	arr[256];
	char		*s1;
	char		*s2;
	int			i;
	int			j;
	
	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		i = 0;
		while (s1[i])
		{
			if (!arr[s1[i]])
			{
				j = 0;
				while (s2[j])
				{
					if (s2[j] == s1[i])
					{
						arr[s1[i]] = 1;
						break ;
					}
					j++;
				}
			}
			if (arr[s1[i]] == 1)
				write(1, &s1[i], 1);
			arr[s1[i]] = 2;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
