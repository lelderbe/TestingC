/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:03:34 by lelderbe          #+#    #+#             */
/*   Updated: 2020/12/15 17:08:42 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*remove_chars(char *str, char c)
{
	int		i;
	int		j;
	char	*result;

	result = str;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != (unsigned char)c)
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (result);
}

int		main(void)
{
	char	str[] = "Hello new world!";

	printf("original: %s\n", str);
	printf("modified: %s\n", remove_chars(str, 'e'));
	return (0);
}
