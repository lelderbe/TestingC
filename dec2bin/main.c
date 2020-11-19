/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:36:07 by lelderbe          #+#    #+#             */
/*   Updated: 2020/11/12 13:41:09 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	char			buf[] = "00000000";
	int				i;
	char			c;
	unsigned char	uc;
	int				j;

	i = -57;
	c = i;
	uc = i;
	printf(" i: %b\n", i);
	printf(" i: %d\n", i);
	printf(" c: %d\n", c);
	printf("uc: %d\n", uc);

	j = 8;
	while (j--) {
	    if (i & 1)
			buf[j] = '1';
    	else
			buf[j] = '0';
	    i = i >> 1;
	}
	printf("%s\n", buf);

}
